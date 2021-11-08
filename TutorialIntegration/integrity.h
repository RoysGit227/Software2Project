#ifndef INTEGRITY_H
#define INTEGRITY_H

#include <QMainWindow>

namespace Ui {
class Integrity;
}

class Integrity : public QMainWindow
{
    Q_OBJECT

public:
    explicit Integrity(QWidget *parent = nullptr);
    ~Integrity();

private slots:
    void on_Back_Button_clicked();

private:
    Ui::Integrity *ui;
};

#endif // INTEGRITY_H
