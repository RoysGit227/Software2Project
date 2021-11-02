#ifndef ECGDIALOG_H
#define ECGDIALOG_H

#include <QDialog>

namespace Ui {
class ECGDialog;
}

class ECGDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ECGDialog(QWidget *parent = nullptr);
    ~ECGDialog();

private:
    Ui::ECGDialog *ui;
};

#endif // ECGDIALOG_H
