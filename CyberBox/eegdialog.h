#ifndef EEGDIALOG_H
#define EEGDIALOG_H

#include <QDialog>

namespace Ui {
class EEGDialog;
}

class EEGDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EEGDialog(QWidget *parent = nullptr);
    ~EEGDialog();

private:
    Ui::EEGDialog *ui;
};

#endif // EEGDIALOG_H
