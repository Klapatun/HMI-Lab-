#include "sdiprogram_klapatun_demin.h"
#include <docwindow_klapatun_demin.h>
#include <QMenu>
#include <QMainWindow>
#include <QtWidgets>

SDIProgram_Klapatun_Demin::SDIProgram_Klapatun_Demin(QWidget *parent) : QMainWindow(parent)
{
    QMenu* pmnuFile = new QMenu("&File");
    QMenu* pmnuHelp = new QMenu("&Help");
    DocWindow_Klapatun_Demin* pdoc = new DocWindow_Klapatun_Demin;

    pmnuFile->addAction("&Open...",
                        pdoc,
                        SLOT(slotLoad()),
                        QKeySequence("CTRL+O")
                        );
    pmnuFile->addAction("&Save...",
                        pdoc,
                        SLOT(slotSave()),
                        QKeySequence("CTRL+S")
                        );
    pmnuFile->addAction("&Save As...",
                        pdoc,
                        SLOT(slotSaveAs()),
                        QKeySequence("CTRL+R")
                        );
    pmnuFile->addAction("&Color...",
                        pdoc,
                        SLOT(slotColor()),
                        QKeySequence("CTRL+L")
                        );
    pmnuFile->addSeparator();
    pmnuFile->addAction("&Quit",
                        qApp,
                        SLOT(quit()),
                        QKeySequence("CTRL+Q")
                        );

    pmnuHelp->addAction("&About",
                        this,
                        SLOT(slotAbout()),
                        Qt::Key_F1
                        );

    menuBar()->addMenu(pmnuFile);
    menuBar()->addMenu(pmnuHelp);

    setCentralWidget(pdoc);

    connect(pdoc,
            SIGNAL(changeWindowTitle(const QString&)),
            SLOT(slotChangeWindowTitle(const QString&))
            );

    statusBar()->showMessage("Ready",2000);
}
