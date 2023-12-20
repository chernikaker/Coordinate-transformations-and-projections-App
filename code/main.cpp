#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Ш - Шрубок");
    w.setFixedSize(w.size());
    w.show();
    return a.exec();
}
