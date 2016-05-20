#include "mainwindow.h"
#include "webaxwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QCoreApplication::setApplicationVersion(QT_VERSION_STR);
    QCoreApplication::setApplicationName("Active Qt Web Browser");
    QCoreApplication::setOrganizationName("QtProject");

    MainWindow w;

    //const QString url="https://www.baidu.com/";
    //w.webShow(url);
    w.show();

    return a.exec();
}
