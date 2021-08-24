#include "waiting.h"
#include "QtGuiApplication1.h"
#include <QMovie>
#include "QMessageBox"
#include<QDebug>

wating::wating(QWidget *parent) :
	QWidget(parent)
	
{
	ui.setupUi(this);
	this->setFixedSize(200, 200);
	background = new QFrame(this);
	background->setStyleSheet("background-color:#fff;border-radius:10px;");
	background->setGeometry(0, 50, 200, 150);
	label = new QLabel(background);
	label->setGeometry(0, 0, 200, 150);
	movie = new QMovie(":/Img/loding.gif");
	movie->setScaledSize(QSize(200, 150));
	label->setScaledContents(true);
	label->setMovie(movie);
	movie->start();
	qDebug() << "loading";
	connect(this, SIGNAL(loading()), this, SLOT(close()));
}

wating::~wating()
{
	//一定要delete界面元素,不然会留下现一个透明方框
	delete background;
	delete label;
	delete movie;
	delete ui;

}
