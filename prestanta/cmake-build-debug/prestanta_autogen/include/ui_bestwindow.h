/********************************************************************************
** Form generated from reading UI file 'bestwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BESTWINDOW_H
#define UI_BESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bestwindow
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;

    void setupUi(QWidget *bestwindow)
    {
        if (bestwindow->objectName().isEmpty())
            bestwindow->setObjectName("bestwindow");
        bestwindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(bestwindow);
        verticalLayout->setObjectName("verticalLayout");
        listWidget = new QListWidget(bestwindow);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);


        retranslateUi(bestwindow);

        QMetaObject::connectSlotsByName(bestwindow);
    } // setupUi

    void retranslateUi(QWidget *bestwindow)
    {
        bestwindow->setWindowTitle(QCoreApplication::translate("bestwindow", "bestwindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bestwindow: public Ui_bestwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BESTWINDOW_H
