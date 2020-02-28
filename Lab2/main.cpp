#include "mainwindow.h"
#include <QApplication>
#include "startdialog_klapatun_demin.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    StartDialog_Klapatun_Demin startDialog;
    startDialog.show();

    return a.exec();
}
