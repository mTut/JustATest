#ifndef JUSTATEST_H
#define JUSTATEST_H

#include <QtWidgets/QMainWindow>
#include "ui_justatest.h"

class JustATest : public QMainWindow
{
	Q_OBJECT

public:
	JustATest(QWidget *parent = 0);
	~JustATest();

private:
	Ui::JustATestClass ui;
};

#endif // JUSTATEST_H
