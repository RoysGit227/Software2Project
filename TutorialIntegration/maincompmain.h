#ifndef MAINCOMPMAIN_H
#define MAINCOMPMAIN_H

#include <QMainWindow>

namespace Ui {
class MainCompMain;
}

class MainCompMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainCompMain(QWidget *parent = nullptr);
    ~MainCompMain();

private:
    Ui::MainCompMain *ui;
};

#endif // MAINCOMPMAIN_H
