#ifndef VULNERABILITIES_H
#define VULNERABILITIES_H

#include <QMainWindow>
#include "availability.h"
#include "confidentiality.h"
#include "integrity.h"

namespace Ui {
class Vulnerabilities;
}

class Vulnerabilities : public QMainWindow
{
    Q_OBJECT

public:
    explicit Vulnerabilities(QWidget *parent = nullptr);
    ~Vulnerabilities();

private slots:
    void on_Integrity_Button_clicked();

    void on_Confidentiality_Button_clicked();

    void on_Availability_Button_clicked();

private:
    Ui::Vulnerabilities *ui;
    Availability *newAvailability;
    Confidentiality *newConfidentiality;
    Integrity * newIntegrity;
};

#endif // VULNERABILITIES_H
