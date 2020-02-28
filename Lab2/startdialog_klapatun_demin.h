#ifndef STARTDIALOG_KLAPATUN_DEMIN_H
#define STARTDIALOG_KLAPATUN_DEMIN_H

#include <QWidget>
#include <QPushButton>

class StartDialog_Klapatun_Demin : public QPushButton
{
    Q_OBJECT
public:
    StartDialog_Klapatun_Demin(QWidget *parent = nullptr);

signals:

public slots:
    void slotButtonClicked();
};

#endif // STARTDIALOG_KLAPATUN_DEMIN_H
