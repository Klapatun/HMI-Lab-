#ifndef INPUTDIALOG_KLAPATUN_DEMIN_H
#define INPUTDIALOG_KLAPATUN_DEMIN_H

#include <QDialog>

class QLineEdit;
class InputDialog_Klapatun_Demin : public QDialog
{
private:
    QLineEdit* m_ptxtFirstName;
    QLineEdit* m_ptxtLastName;

public:
    InputDialog_Klapatun_Demin(QWidget* pwgt);

    QString firstName() const;
    QString lastName() const;
};

#endif // INPUTDIALOG_KLAPATUN_DEMIN_H
