#ifndef STARTDIALOG_KLAPATUN_DEMIN_H
#define STARTDIALOG_KLAPATUN_DEMIN_H

#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include "inputdialog_klapatun_demin.h"

class StartDialog_Klapatun_Demin
{
public:
    StartDialog_Klapatun_Demin(QWidget* pwgt = 0) : QPushButton("Нажми",pwgt)
    {
        connect(this, SIGNAL(clicked()), SLOT(slotButtonClicked()));
    }
public slots:
    void slotButtonClicked()
    {
        InputDialog_Klapatun_Demin* pInputDialog = new InputDialog_Klapatun_Demin;
        if(pInputDialog->exec() == QDialog::Accepted)
        {
            QMessageBox::information(0,
                                     "Ваша информация: ",
                                     "Имя: "
                                     + pInputDialog->firstName()
                                     + "\nФамилия: "
                                     + pInputDialog->lastName()
                                     );
        }
        delete pInputDialog;
    }
};

#endif // STARTDIALOG_KLAPATUN_DEMIN_H
