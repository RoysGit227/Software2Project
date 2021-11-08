#ifndef ATTACKS_H
#define ATTACKS_H

#include <QMainWindow>

namespace Ui {
class Attacks;
}

class Attacks : public QMainWindow
{
    Q_OBJECT

public:
    explicit Attacks(QWidget *parent = nullptr);
    ~Attacks();

private:
    Ui::Attacks *ui;
};

#endif // ATTACKS_H
