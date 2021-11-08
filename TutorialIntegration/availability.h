#ifndef AVAILABILITY_H
#define AVAILABILITY_H

#include <QMainWindow>

namespace Ui {
class Availability;
}

class Availability : public QMainWindow
{
    Q_OBJECT

public:
    explicit Availability(QWidget *parent = nullptr);
    ~Availability();

private slots:
    void on_Back_Button_clicked();

private:
    Ui::Availability *ui;
};

#endif // AVAILABILITY_H
