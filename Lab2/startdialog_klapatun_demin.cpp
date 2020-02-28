#include "startdialog_klapatun_demin.h"
#include <QtGui>
#include "inputdialog_klapatun_demin.h"
#include <QMessageBox>
#include <QPushButton>

StartDialog_Klapatun_Demin::StartDialog_Klapatun_Demin(QWidget *parent) : QPushButton("Нажми", parent)
{
    connect(this, SIGNAL(clicked(bool)), SLOT(slotButtonClicked()));
}

void StartDialog_Klapatun_Demin::slotButtonClicked()
{
    InputDialog_Klapatun_Demin* pInputDialog = new InputDialog_Klapatun_Demin(this);
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
