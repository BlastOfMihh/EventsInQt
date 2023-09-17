//
// Created by mihh on 7/12/23.
//

#ifndef PRESTANTA_BESTWINDOW_H
#define PRESTANTA_BESTWINDOW_H

#include <QWidget>
#include "ui_bestwindow.h"
#include "observer.h"
#include "service.h"
#include "QListWidgetItem"


QT_BEGIN_NAMESPACE
namespace Ui { class bestwindow; }
QT_END_NAMESPACE

class bestwindow : public QWidget, public Observer {
Q_OBJECT

private:
    Ui::bestwindow *ui;
    Service * service;

public:
    explicit bestwindow(Service* service_, QWidget *parent=0) :
            QWidget(parent), ui(new Ui::bestwindow) , service(service_) {
        ui->setupUi(this);
        update();
    }

    void showList(){
        ui->listWidget->clear();
        std::vector<Event> events=service->getSortedPop();
        for (auto event:events){
            auto item=new QListWidgetItem();
            item->setText(QString::fromStdString(event.str()+" "+std::to_string(event.getAttendees().size())));
            ui->listWidget->addItem(item);
        }
    }
    void update() override{
        showList();
    }

    ~bestwindow() override;

};


#endif //PRESTANTA_BESTWINDOW_H
