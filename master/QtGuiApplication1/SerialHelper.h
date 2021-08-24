#pragma once
#ifndef CHANGEUI_H
#define CHANGEUI_H
#include "ui_QtGuiApplication1.h"
#define List_MAX 20
class SerialHelper
{
public: 
	SerialHelper(Ui::QtGuiApplication1Class ui);
	void updateItem(int id, int ch, int dat);
	void writeScore(int dat);
	void writeChannel(int dat);
	void writeID(int dat);
	void delate(void);
	int List_id[List_MAX];
	int List_ch[List_MAX];
	double List_dat[List_MAX];
	int List_type[List_MAX];
	int List_count;
public: /*
  * 定义几个QLabel指针
  * 这个是将mainwindow中的控件指针赋值给他们的
  * 就是将 m_q1 = ui->Q1(在mainwindow中进行)
  *
     */
	Ui::QtGuiApplication1Class m_ui;
	double Round(_In_ double dSrc, _In_ int iBit);
private:

};

#endif
