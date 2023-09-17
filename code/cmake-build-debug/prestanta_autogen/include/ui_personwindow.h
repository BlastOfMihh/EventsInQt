/********************************************************************************
** Form generated from reading UI file 'personwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONWINDOW_H
#define UI_PERSONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_personwindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *positionLabel;
    QCheckBox *viewCloseCheck;
    QListWidget *eventList;
    QLineEdit *eventName;
    QLineEdit *eventDescription;
    QLineEdit *eventX;
    QLineEdit *eventY;
    QLineEdit *eventDate;
    QPushButton *submitEvent;
    QPushButton *goingButton;
    QLineEdit *eventDescriptionEdit;
    QLineEdit *eventDateEdit;
    QLabel *attendingLabel;
    QPushButton *updateEvent;

    void setupUi(QWidget *personwindow)
    {
        if (personwindow->objectName().isEmpty())
            personwindow->setObjectName("personwindow");
        personwindow->resize(655, 574);
        verticalLayout = new QVBoxLayout(personwindow);
        verticalLayout->setObjectName("verticalLayout");
        positionLabel = new QLabel(personwindow);
        positionLabel->setObjectName("positionLabel");

        verticalLayout->addWidget(positionLabel);

        viewCloseCheck = new QCheckBox(personwindow);
        viewCloseCheck->setObjectName("viewCloseCheck");

        verticalLayout->addWidget(viewCloseCheck);

        eventList = new QListWidget(personwindow);
        eventList->setObjectName("eventList");

        verticalLayout->addWidget(eventList);

        eventName = new QLineEdit(personwindow);
        eventName->setObjectName("eventName");

        verticalLayout->addWidget(eventName);

        eventDescription = new QLineEdit(personwindow);
        eventDescription->setObjectName("eventDescription");

        verticalLayout->addWidget(eventDescription);

        eventX = new QLineEdit(personwindow);
        eventX->setObjectName("eventX");

        verticalLayout->addWidget(eventX);

        eventY = new QLineEdit(personwindow);
        eventY->setObjectName("eventY");

        verticalLayout->addWidget(eventY);

        eventDate = new QLineEdit(personwindow);
        eventDate->setObjectName("eventDate");

        verticalLayout->addWidget(eventDate);

        submitEvent = new QPushButton(personwindow);
        submitEvent->setObjectName("submitEvent");

        verticalLayout->addWidget(submitEvent);

        goingButton = new QPushButton(personwindow);
        goingButton->setObjectName("goingButton");

        verticalLayout->addWidget(goingButton);

        eventDescriptionEdit = new QLineEdit(personwindow);
        eventDescriptionEdit->setObjectName("eventDescriptionEdit");

        verticalLayout->addWidget(eventDescriptionEdit);

        eventDateEdit = new QLineEdit(personwindow);
        eventDateEdit->setObjectName("eventDateEdit");

        verticalLayout->addWidget(eventDateEdit);

        attendingLabel = new QLabel(personwindow);
        attendingLabel->setObjectName("attendingLabel");

        verticalLayout->addWidget(attendingLabel);

        updateEvent = new QPushButton(personwindow);
        updateEvent->setObjectName("updateEvent");

        verticalLayout->addWidget(updateEvent);


        retranslateUi(personwindow);

        QMetaObject::connectSlotsByName(personwindow);
    } // setupUi

    void retranslateUi(QWidget *personwindow)
    {
        personwindow->setWindowTitle(QCoreApplication::translate("personwindow", "personwindow", nullptr));
        positionLabel->setText(QCoreApplication::translate("personwindow", "position", nullptr));
        viewCloseCheck->setText(QCoreApplication::translate("personwindow", "Close", nullptr));
        eventName->setText(QCoreApplication::translate("personwindow", "Name", nullptr));
        eventDescription->setText(QCoreApplication::translate("personwindow", "Desc", nullptr));
        eventX->setText(QCoreApplication::translate("personwindow", "0", nullptr));
        eventY->setText(QCoreApplication::translate("personwindow", "0", nullptr));
        eventDate->setText(QCoreApplication::translate("personwindow", "00/00/0000", nullptr));
        submitEvent->setText(QCoreApplication::translate("personwindow", "Submit Event", nullptr));
        goingButton->setText(QCoreApplication::translate("personwindow", "GoingButton", nullptr));
        eventDescriptionEdit->setText(QCoreApplication::translate("personwindow", "description", nullptr));
        eventDateEdit->setText(QCoreApplication::translate("personwindow", "deit", nullptr));
        attendingLabel->setText(QCoreApplication::translate("personwindow", "Attending:", nullptr));
        updateEvent->setText(QCoreApplication::translate("personwindow", "Update Date and Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personwindow: public Ui_personwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONWINDOW_H
