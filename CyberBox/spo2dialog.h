#ifndef SPO2DIALOG_H
#define SPO2DIALOG_H

#include <QDialog>

namespace Ui {
class SpO2Dialog;
}

class SpO2Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SpO2Dialog(QWidget *parent = nullptr);
    ~SpO2Dialog();

private:
    Ui::SpO2Dialog *ui;
};

#endif // SPO2DIALOG_H
