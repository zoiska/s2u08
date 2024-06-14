#include "clicker.h"
#include "ui_clicker.h"


clicker::clicker(QWidget *parent) : QMainWindow(parent), ui(new Ui::clicker) {
    ui->setupUi(this);
    this->setWindowTitle("Ereignisverarbeitung");
    inc = 0;
    createActions();
    createMenus();

    connect(ui->incrementer, SIGNAL(clicked(bool)), this, SLOT(buttonClicked()));
    connect(incrementAct, SIGNAL(triggered()), this, SLOT(buttonClicked()));
    connect(resetAct, SIGNAL(triggered()), this, SLOT(resetClicked()));
}

clicker::~clicker() {
    delete ui;
}

void clicker::buttonClicked() {
    inc++;
    ui->label->setText("Clicks: " + QString::number(inc));
}

void clicker::resetClicked() {
    inc = 0;
    ui->label->setText("Clicks: " + QString::number(inc));
}

void clicker::createActions() {
    incrementAct = new QAction("Increment", this);
    incrementAct->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_I));
    incrementAct->setToolTip(tr("Increment the counter"));

    resetAct = new QAction("Reset", this);
    resetAct->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_R));
    resetAct->setToolTip(tr("Reset the counter"));
}

void clicker::createMenus() {
    QMenuBar* bar = menuBar();
    QMenu* fileMenu = bar->addMenu(tr("Counter"));
    fileMenu->addAction(incrementAct);
    fileMenu->addAction(resetAct);
}
