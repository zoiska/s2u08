//
// Created by zoisk on 14.06.2024.
//

#ifndef GREETER_H
#define GREETER_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class greeter; }
QT_END_NAMESPACE

class greeter : public QMainWindow {
Q_OBJECT

public:
    explicit greeter(QWidget *parent = nullptr);

    ~greeter() override;

private slots:
    void buttonClicked();

private:
    Ui::greeter *ui;
};


#endif //GREETER_H
