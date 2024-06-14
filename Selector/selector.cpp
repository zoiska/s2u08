#include "selector.h"
#include "ui_selector.h"
#include "../Clicker/clicker.h"
#include "../Greeter/greeter.h"


selector::selector(QWidget *parent) : QMainWindow(parent), ui(new Ui::selector) {
    ui->setupUi(this);
    connect(ui->clicker, SIGNAL(clicked(bool)), this, SLOT(selectClicker()));
    connect(ui->greeter, SIGNAL(clicked(bool)), this, SLOT(selectGreeter()));
}

selector::~selector() {
    delete ui;
}

void selector::selectClicker() {
    auto* w = new clicker;
    w->show();
}

void selector::selectGreeter() {
    auto* w = new greeter;
    w->show();
}
