//
// Created by zoisk on 14.06.2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_greeter.h" resolved

#include "greeter.h"
#include "ui_greeter.h"


greeter::greeter(QWidget *parent) : QMainWindow(parent), ui(new Ui::greeter) {
    ui->setupUi(this);
    connect(ui->helloButton, SIGNAL(clicked(bool)), this, SLOT(buttonClicked()));
}

greeter::~greeter() {
    delete ui;
}

void greeter::buttonClicked() {
    ui->greeting->setText("Hallo " + ui->lineEdit->text() + "!");
}
