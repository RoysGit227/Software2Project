#ifndef CONFIDENTIALITY_H
#define CONFIDENTIALITY_H

#include <QMainWindow>

namespace Ui {
class Confidentiality;
}

class Confidentiality : public QMainWindow
{
    Q_OBJECT

public:
    explicit Confidentiality(QWidget *parent = nullptr);
    ~Confidentiality();

private slots:
    void on_Back_Button_clicked();

private:
    Ui::Confidentiality *ui;
};

#endif // CONFIDENTIALITY_H
