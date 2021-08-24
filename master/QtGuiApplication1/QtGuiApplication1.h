#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"
#include "workthread.h"


class QtGuiApplication1 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);
	
private:
	Ui::QtGuiApplication1Class ui;
	WorkThread *workThread;
	QAction *myAc1;
	QAction *myAc2;
	QAction *myAc3;


private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	void on_pushButton_3_clicked();
	void on_pushButton_4_clicked();
	void on_pushButton_5_clicked();
	void on_pushButton_6_clicked();
	void ShowInfo();
	

};
