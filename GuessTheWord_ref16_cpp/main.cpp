#include "guess_word.h"

#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    guess_word w;
    w.show();
    return a.exec();
}
