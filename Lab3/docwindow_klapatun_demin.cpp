#include "docwindow_klapatun_demin.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMenu>
#include <QColorDialog>

DocWindow_Klapatun_Demin::DocWindow_Klapatun_Demin(QWidget *pwgt): QTextEdit(pwgt)
{

}

void DocWindow_Klapatun_Demin::slotLoad()
{
    QString str = QFileDialog::getOpenFileName();
    if(str.isEmpty()){
        return;
    }

    QFile file(str);
    if(file.open(QIODevice::ReadOnly)){
        QTextStream stream(&file);
        setPlainText(stream.readAll());
        file.close();

        m_strFileName=str;
        emit changeWindowTitle(m_strFileName);
    }
}

void DocWindow_Klapatun_Demin::slotSaveAs()
{
    QString str = QFileDialog::getSaveFileName(0,m_strFileName);
    if(!str.isEmpty()){
        m_strFileName=str;
        slotSave();
    }
}

void DocWindow_Klapatun_Demin::slotSave()
{
    if(m_strFileName.isEmpty()){
        slotSaveAs();
        return;
    }

    QFile file(m_strFileName);
    if(file.open(QIODevice::WriteOnly)){
        QTextStream(&file)<<toPlainText();

        file.close();
        emit changeWindowTitle(m_strFileName);
    }
}

void DocWindow_Klapatun_Demin::slotColor()
{
    QColor color = QColorDialog::getColor();
    if(!color.isValid()){
        return;
    }

    setTextColor(color);

}
