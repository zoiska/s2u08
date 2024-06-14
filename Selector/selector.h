#ifndef SELECTOR_H
#define SELECTOR_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class selector; }
QT_END_NAMESPACE

class selector : public QMainWindow {
Q_OBJECT

public:
    explicit selector(QWidget *parent = nullptr);

    ~selector() override;

private slots:
    static void selectClicker();
    static void selectGreeter();

private:
    Ui::selector *ui;
};


#endif //SELECTOR_H
