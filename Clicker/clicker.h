//
// Created by zoisk on 14.06.2024.
//

#ifndef CLICKER_H
#define CLICKER_H

#include <QMainWindow>
#include <QWidget>
#include <QString>
#include <QLabel>
#include <QMenuBar>


QT_BEGIN_NAMESPACE
namespace Ui { class clicker; }
QT_END_NAMESPACE

class clicker : public QMainWindow {
Q_OBJECT

public:
    explicit clicker(QWidget *parent = nullptr);

    ~clicker() override;

private slots:
    void buttonClicked();
    void resetClicked();

private:
    Ui::clicker *ui;
    void createActions();
    void createMenus();

    int inc;
    QAction* incrementAct;
    QAction* resetAct;
};


#endif //CLICKER_H
