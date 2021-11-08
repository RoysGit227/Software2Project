#ifndef ATTACKERMAIN_H
#define ATTACKERMAIN_H

#include <QMainWindow>

namespace Ui {
class Attacker;
}

class Attacker : public QMainWindow
{
    Q_OBJECT

public:
    explicit Attacker(QWidget *parent = nullptr);
    ~Attacker();

private:
    Ui::Attacker *ui;
};

#endif // ATTACKERMAIN_H
