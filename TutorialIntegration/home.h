#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include "tutorial.h"
#include "cyberbox.h"

namespace Ui {
class Home;
}

class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();

private slots:
    void on_Tutorial_Button_clicked();

    void on_Attacks_Button_clicked();

private:
    Ui::Home *ui;
    Tutorial *newTutorial;
    CyberBox *newCyberbox;
};

#endif // HOME_H
