#ifndef DOCWINDOW_KLAPATUN_DEMIN_H
#define DOCWINDOW_KLAPATUN_DEMIN_H

#include <QTextEdit>

class DocWindow_Klapatun_Demin : public QTextEdit
{
    Q_OBJECT
private:
    QString m_strFileName;
public:
    DocWindow_Klapatun_Demin(QWidget *pwgt = 0);

signals:
    void changeWindowTitle(const QString&);

public slots:
    void slotLoad();
    void slotSave();
    void slotSaveAs();
    void slotColor();
};

#endif // DOCWINDOW_KLAPATUN_DEMIN_H
