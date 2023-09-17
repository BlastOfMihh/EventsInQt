//
// Created by mihh on 7/12/23.
//

// You may need to build the project (run Qt uic code generator) to get "ui_personwindow.h" resolved

#include "personwindow.h"
#include "ui_personwindow.h"


personwindow::~personwindow() {
    delete ui;
}
