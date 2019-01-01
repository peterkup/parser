#include "html_parser.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    html_parser w;
    w.show();

    return a.exec();
}
