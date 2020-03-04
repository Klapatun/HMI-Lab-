#ifndef SDIPROGRAM_KLAPATUN_DEMIN_H
#define SDIPROGRAM_KLAPATUN_DEMIN_H

#include <QMainWindow>
#include <QMessageBox>

class SDIProgram_Klapatun_Demin : public QMainWindow
{
    Q_OBJECT
public:
    explicit SDIProgram_Klapatun_Demin(QWidget *parent = nullptr);

signals:

public slots:
    void slotAbout()
    {
        QMessageBox::about(this,"Application","Klapatun & Demin from ЗП-71");
    }

    void slotChangeWindowTitle(const QString& str)
    {
        setWindowTitle(str);
    }
};

#endif // SDIPROGRAM_KLAPATUN_DEMIN_H
