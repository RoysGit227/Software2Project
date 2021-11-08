#ifndef CYBER_H
#define CYBER_H

#include <QMainWindow>
#include "home.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Cyber; }
QT_END_NAMESPACE

class Cyber : public QMainWindow
{
    Q_OBJECT

public:
    Cyber(QWidget *parent = nullptr);
    ~Cyber();

private slots:
    void on_login_Button_clicked();

private:
    Ui::Cyber *ui;
    Home *Newhome;
};
#endif // CYBER_H
