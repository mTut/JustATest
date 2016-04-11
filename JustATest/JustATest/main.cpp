#include "justatest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	JustATest w;
	w.show();
	return a.exec();
}
