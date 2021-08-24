#pragma execution_character_set("utf-8")
#include "SerialHelper.h"
#include<QDebug>
#include <iostream>
#include "QtGuiApplication1.h"

SerialHelper::SerialHelper(Ui::QtGuiApplication1Class ui)
{
	m_ui = ui;
	List_count = 0;
}
void SerialHelper::updateItem(int id,int ch,int dat) {
	//qDebug() << "success!" << endl;
	QListWidgetItem *item = new QListWidgetItem;
	List_dat[List_count] = Round(dat / 10.0, 1);
	item->setText("设备ID: "+ QString::number(id)+"   通道: "+ QString::number(ch)+"   分数: "+ QString::number(List_dat[List_count]));
	List_id[List_count] = id;
	List_ch[List_count] = ch;
	
	List_count += 1;
	m_ui.listWidget->addItem(item);
	//qDebug() << "List_count:" << List_count;
}

void SerialHelper::delate() {
	int num = m_ui.listWidget->count();  //获取列表项的总数目
	m_ui.listWidget->setFocus();
	List_count = 0;
	qDebug() << num;
	for (int i = 0; i < num; i++)
	{   //逐个获取列表项的指针，并删除
		
		QListWidgetItem *item = m_ui.listWidget->takeItem(num-i-1);
		m_ui.listWidget->removeItemWidget(item);
		/*delete item;*/
	}

}


void  SerialHelper::writeChannel(int dat) {
	qDebug() << "Channel: "<<dat<< endl;
	
}

void  SerialHelper::writeScore(int dat) {
	qDebug() << "Score: " << dat << endl;
	//m_q1->setText("Score: "+QString::number(dat));
}
void  SerialHelper::writeID(int dat) {
	qDebug() << "ID: " << dat << endl;
}

double SerialHelper::Round(_In_ double dSrc, _In_ int iBit)
{
	double retVal = 0.0;
	int  intTmp = 0;


	// 若保留小数位数不正确
	if (iBit < 0)
	{
		return 0;
	}

	//  若 为负数
	if (dSrc < 0)
	{
		// 首先转为正数
		dSrc *= -1;

		intTmp = (int)((dSrc + 0.5 / pow(10.0, iBit)) * pow(10.0, iBit));
		retVal = (double)intTmp / pow(10.0, iBit);

		// 再转为 负数
		retVal *= -1;
	}

	// 若为非负数
	else
	{
		intTmp = (int)((dSrc + 0.5 / pow(10.0, iBit)) * pow(10.0, iBit));
		retVal = (double)intTmp / pow(10.0, iBit);
	}

	// 返回计算结果
	return retVal;
}