#include "workthread.h"
#include "QtGuiApplication1.h"
#include <QtDebug>
#include <iostream>
#include "WZSerialPort.h"
#include "SerialHelper.h"
#include "QMessageBox"
extern SerialHelper *          Helper;
extern WZSerialPort w1;


WorkThread::WorkThread()
{
	
}
void WorkThread::run()
{
	
	
	
	while (true)
	{
		string re = w1.receive();
		
		if (re.length()) {
			qDebug() << re.length();
			int length = int(re[1]);
			if(int(re[0]) == -2&&int(re[length-1])==-128){
				Helper->updateItem((re[2]), (re[3]), (re[4]));
				/*for (int i = 0; i < length; i++) {
					qDebug() << "index: " << i << "--" << int(re[i]) << endl;
					
				}*/
				
			}
			
		}
		
		
		
	}
}
