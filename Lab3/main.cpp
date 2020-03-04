#include "mainwindow.h"
#include <QApplication>
#include "sdiprogram_klapatun_demin.h"
#include <QtGui>
#include <QSplashScreen>

void loadModules(QSplashScreen* psplash)
{
    QTime time;
    time.start();

    for (int i = 0; i < 100; ) {
        if (time.elapsed() > 40) {
            time.start();
            ++i;
        }
        psplash->showMessage("Loading modules: "
                             + QString::number(i) + "%",
                             Qt::AlignCenter | Qt::AlignCenter,
                             Qt::black
                            );
        qApp->processEvents();
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    QSplashScreen splash(QPixmap("1.png"));
    splash.show();
    SDIProgram_Klapatun_Demin sdio;
    loadModules(&splash);
    splash.finish(&sdio);
    sdio.show();


    return a.exec();
}
