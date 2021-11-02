#ifndef ATTACKERDIALOG_H
#define ATTACKERDIALOG_H

#include <QDialog>

namespace Ui {
class AttackerDialog;
}

class AttackerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AttackerDialog(QWidget *parent = nullptr);
    ~AttackerDialog();

private:
    Ui::AttackerDialog *ui;
};

#endif // ATTACKERDIALOG_H
