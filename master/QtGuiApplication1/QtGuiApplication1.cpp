#pragma execution_character_set("utf-8")
#include "QtGuiApplication1.h"
#include "WZSerialPort.h"
#include "QMessageBox"
#include<QDebug>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "SerialHelper.h"
#include "WzExcel.h"
#include <QFileDialog>
#include <QHBoxLayout>
#include <string.h>

int flag_serial = 0;
# define max_index 20
WZSerialPort w1;
SerialHelper *          Helper;
int type_size = 3, sample_size = 3;



QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	Helper = new SerialHelper(ui);
	QRegExp regx("[0-9]+$");
	ui.lineEdit->setValidator(new QRegExpValidator(regx, ui.lineEdit));
	ui.lineEdit_2->setValidator(new QRegExpValidator(regx, ui.lineEdit_2));
	//ui.lineEdit_3->setValidator(new QRegExpValidator(regx, ui.lineEdit_3));
	//ui.lineEdit_2->setValidator(validator);
	/*QAction *open = new QAction(QIcon(":/images/tool_configuration"), "Open(&O)", this);
	open->setToolTip("open file");
	ui.mainToolBar->addAction(open);*/
	/*ui.menuBar->addAction("����", this, SLOT(configure()));
	ui.menuBar->addAction("����", this, SLOT(ShowInfo()));*/
	//connect(ui.menu, SIGNAL(aboutToHide()), this, SLOT(configure()));
	
}

void QtGuiApplication1::on_pushButton_clicked() {
	QString str = ui.comboBox->currentText();
	//int count = ui.comboBox->currentIndex();
	
	QByteArray ba = str.toLatin1();
	if (!flag_serial) {
		if (w1.open(ba.data()))
		{
			ui.pushButton->setText("�رմ���");
			workThread = new WorkThread();
			workThread->start();		
			flag_serial = 1;
			ui.pushButton->setStyleSheet("color:red");
			qDebug() << "1";

		}
		else {
			QMessageBox::warning(NULL, "error", "���ڴ�ʧ��\n����ָ�������Ƿ���ڻ����Ѿ���");
			
		}
	}
	else {

		qDebug() << "2";
		ui.pushButton->setText("�򿪴���");
		ui.pushButton->setStyleSheet("color:block");
		flag_serial = 0;
		workThread->terminate();
		workThread->wait();
		w1.close();
		
	}
	
	
}


void QtGuiApplication1::on_pushButton_2_clicked() {
	//static QMessageBox messageBox;
	vector<int> standard;
	
	/*messageBox.setWindowTitle("��ʾ");
	messageBox.addButton(QMessageBox::Ok);
	messageBox.button(QMessageBox::Ok)->hide();
	messageBox.setText("���ڵ�����.....");
	QString str = messageBox.text();
	qDebug() << str << endl;
	messageBox.show();*/
	//messageBox.detailedText("1234556");
	QString filename = QFileDialog::getSaveFileName(this,
		tr("Save Image"),
		"",
		tr("*.xlsx;; *.xls")); //ѡ��·��	
	WzExcel w(filename);
	
	if (w.open()) {										//��
		w.setCurrentWorkSheet();                           //���õ�ǰ������
		w.insertValue(1, 1, QString("���к�"));
		w.insertValue(1, 2, QString("������"));
		w.insertValue(1, 3, QString("����"));
		Helper->List_count = sample_size * type_size;
		for (int i = 0; i < Helper->List_count; i++) {
			w.insertValue(i + 2, 1, QString::number(i+1));
			w.insertValue(i + 2, 2, QString::number(Helper->List_type[i]));
			w.insertValue(i + 2, 3, QString::number(Helper->List_dat[i]));
		}
		for (int i = 0; i < sample_size; i++) {
			
			w.insertValue(2+i, 6, "��Ʒ" + QString("%1").arg(Helper->List_type[i], 3, 10, QChar('0')) +"��");
			standard.push_back(Helper->List_type[i]);
		}
		for (int i = 0; i < type_size; i++) {
			w.insertValue(1, 7 + i, "����" + QString::number(i + 1));
		}
		//int test[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
		double result[max_index][max_index];
		for (int j = 0; j < sample_size; j++) {
			for (int i = 0; i < sample_size*type_size; i++) {
				if (Helper->List_type[i] == standard[j]) {
					result[j][i / sample_size] = Helper->List_dat[i];//Helper->List_dat[i]
					//qDebug() << "j:" << j << "-" << i << test[i];
				}
			}
		}
		for (int i = 0; i < sample_size; i++)
			for (int j = 0; j < type_size; j++) {
				//qDebug() << result[i][j];
				w.insertValue(2 + i, 7 + j, QString::number(result[i][j]));
			}
				

		/*w.SetColumnWidth(1, 1, 15);
		w.mergeCells(1, 1, 6, 1);

		w.insertValue(1, 2, QString("����Ա���"));
		w.SetColumnWidth(1, 2, 15);
		for (int i = 1; i < 6; i++)
			w.insertValue(i+1, 2, QString::number(i));

		for(int i = 1;i<=6;i++)
			w.insertValue(1, 2+i, QString("����")+QString::number(i));
		for (int i = 0; i < Helper->List_count; i++) {
			w.insertValue(2, 3 + Helper->List_ch[i], QString::number(Helper->List_dat[i]));
		}*/
		
		w.saveAs(filename);
		QMessageBox::about(NULL, "��ʾ��", " �����ɹ�   ");
	}
	
}

void QtGuiApplication1::on_pushButton_3_clicked() {
	Helper->delate();
	
	
	
}

void QtGuiApplication1::ShowInfo() {
	QMessageBox::about(NULL, "About", " ����ing.......");
}
void QtGuiApplication1::on_pushButton_4_clicked() {
	sample_size = ui.lineEdit->text().toInt();
}
void QtGuiApplication1::on_pushButton_5_clicked() {
	type_size = ui.lineEdit_2->text().toInt();
}
void QtGuiApplication1::on_pushButton_6_clicked() {
	QString temp = ui.lineEdit_3->text();
	vector<int> intList;
	int word;
	QByteArray ba = temp.toLatin1();
	char* rank_type;
	rank_type = ba.data();
	stringstream ss(rank_type);
	while (ss >> word) {//>>�����ո񷵻����͸�word
		intList.push_back(word);
	}
	if (intList.size() != sample_size * type_size) {
		QMessageBox::warning(NULL, "error", "���ݴ�С��һ��\n ������������");
	}
	else {
		for (int i = 0; i < intList.size(); i++) {
			Helper->List_type[i] = intList[i];
			//qDebug() << intList[i];
		}
		QMessageBox::about(NULL, "��ʾ��", " ���óɹ�   ");
	}
	
}