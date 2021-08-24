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
  * ���弸��QLabelָ��
  * ����ǽ�mainwindow�еĿؼ�ָ�븳ֵ�����ǵ�
  * ���ǽ� m_q1 = ui->Q1(��mainwindow�н���)
  *
     */
	Ui::QtGuiApplication1Class m_ui;
	double Round(_In_ double dSrc, _In_ int iBit);
private:

};

#endif
