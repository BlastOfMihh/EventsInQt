//
// Created by mihh on 7/12/23.
//

#ifndef PRESTANTA_PERSONWINDOW_H
#define PRESTANTA_PERSONWINDOW_H

#include "iostream"
#include <QWidget>
#include "ui_personwindow.h"
#include "person.h"
#include "vector"
#include "string"
#include "QWidget"
#include "service.h"
#include "observer.h"
#include "QMessageBox"


QT_BEGIN_NAMESPACE
namespace Ui { class personwindow; }
QT_END_NAMESPACE

class personwindow : public QWidget, public Observer {
Q_OBJECT


private:
    Ui::personwindow *ui;
    Person & person;
    Service * service;
public:
    explicit personwindow(Person & person_, Service * service_, QWidget *parent=0) :
            person(person_), QWidget(parent), ui(new Ui::personwindow) , service(service_){
        ui->setupUi(this);
        update();
        connect(ui->viewCloseCheck, SIGNAL(stateChanged(int)), this, SLOT(on_check(int)));
        if (person.getStatus()==0)
            hideOrganiserTools();
        else hideParticipantTools();
        connect(ui->submitEvent, SIGNAL(pressed()), this, SLOT(addEvent()));
        connect(ui->eventList, SIGNAL(itemSelectionChanged()), this , SLOT(handleSelected()));
        connect(ui->goingButton, SIGNAL(pressed()), this, SLOT(handleGoing()));
        connect(ui->updateEvent, SIGNAL(pressed()), this, SLOT(handleUpdate()));
    }

    void hideOrganiserTools(){
        ui->eventDate->hide();
        ui->eventName->hide();
        ui->eventX->hide();
        ui->eventY->hide();
        ui->eventDescription->hide();
        ui->submitEvent->hide();

        ui->eventDescriptionEdit->hide();
        ui->eventDateEdit->hide();
        ui->attendingLabel->hide();

        ui->updateEvent->hide();
    }
    void hideParticipantTools(){
        ui->goingButton->hide();
    }

    void update() override{
        showText();
        showEvents();
    }

    void showText(){
        std::string pos="position "+
                        std::to_string(person.position().first)
                        +" "+std::to_string(person.position().second);
        ui->positionLabel->setText(QString::fromStdString(pos));
    }
    void showEvents(){
        ui->eventList->clear();
        auto & events=service->getEvents();
        for (auto & event:events)
        if ( not ui->viewCloseCheck->isChecked() or person.distanceTo(event.position())<=5.0){
            auto wid=new QListWidgetItem();
            wid->setText(QString::fromStdString(event.strNoDesc()));
            ui->eventList->addItem(wid);
            if (person.getStatus()==1)
                if (event.getOrganiser()==person.getName())
                    wid->setBackground(Qt::green);
        }
    }
    ~personwindow() override;
public slots:
    void on_check(int x){
        update();
    }
    void addEvent(){
        bool succes=service->addEvent(
                person.getName(),
                ui->eventName->text().toStdString(),
                ui->eventDescription->text().toStdString(),
                ui->eventX->text().toInt(),
                ui->eventY->text().toInt(),
                ui->eventDate->text().toStdString()
        );
        service->notify();
        if (succes)
            service->notify();
        else {
            auto msg = new QMessageBox();
            msg->setText("Invalid input");
            msg->show();
        }
    }
    void handleSelected(){
        if (person.getStatus()==0){
            for(int i=0 ; i<ui->eventList->count(); ++i){
                auto item=ui->eventList->item(i);
                auto &event=service->getEvent(item->text().toStdString());
                item->setText(QString::fromStdString(event.strNoDesc()));
            }
            for(auto item : ui->eventList->selectedItems()){
                auto &event=service->getEvent(item->text().toStdString());
                item->setText(QString::fromStdString(event.str()));
                if (event.attends(person.getName())){
                    ui->goingButton->setDisabled(true);
                }else
                    ui->goingButton->setDisabled(false);
            }
        }else{
            std::string attendingStr="Attending: ";
            for(auto item : ui->eventList->selectedItems()){
                auto &event=service->getEvent(item->text().toStdString());
                ui->eventDescriptionEdit->setText(QString::fromStdString(event.getDescription()));
                ui->eventDateEdit->setText(QString::fromStdString(event.getDate()));
                auto attending=event.getAttendees();
                for(auto attendee:attending)
                    attendingStr+=attendee+" ";
            }
            ui->attendingLabel->setText(QString::fromStdString(attendingStr));
        }
    }
    void handleGoing(){
        for(auto item : ui->eventList->selectedItems()) {
            auto &event = service->getEvent(item->text().toStdString());
            event.attend(person.getName());
            ui->goingButton->setDisabled(true);
        }
        service->notify();
    }
    void handleUpdate(){
        for(auto item : ui->eventList->selectedItems()) {
            auto &event = service->getEvent(item->text().toStdString());
            //auto service->getEvent(item->text().toStdString());
            auto newDesc=ui->eventDescriptionEdit->text().toStdString();
            auto newDate=ui->eventDateEdit->text().toStdString();
            event.setDescription(newDesc);
            event.setDate(newDate);
        }
        service->notify();
    }
};


#endif //PRESTANTA_PERSONWINDOW_H
