#ifndef WHATIS_H
#define WHATIS_H

#include <QMainWindow>

namespace Ui {
class Whatis;
}

class Whatis : public QMainWindow
{
    Q_OBJECT

public:
    explicit Whatis(QWidget *parent = nullptr);
    ~Whatis();

private slots:
    void on_Back_Button_clicked();

private:
    Ui::Whatis *ui;
};

#endif // WHATIS_H
