#pragma execution_character_set("utf-8")
#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>
#include<QDebug>
#include <iostream>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiApplication1 w;
	w.setWindowTitle("无线评分器上位机");
	w.show();
	return a.exec();
}
