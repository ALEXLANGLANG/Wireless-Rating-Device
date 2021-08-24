#include "config.h"
#include "delay.h"
#include "USART.H"
#include "stdio.h"
#include "adc.h"
#include "Keypress.h"
#include "SYN6288.h"
#include "oled.h"
extern void SYN_FrameInfo(uint8_t Music,uint8_t *HZdata);
#define ID 0x01
void set_string(char* res,char ch,char dat){
	res[0]  = 0xfe;
	res[1] = 0x06;
	res[2] = ID;
	res[3] = ch;
	res[4] = dat;
	res[5] = 0x80;
}
int format(int dat){
	float temp;
	if(dat<=1){
		temp = 0;
	}else{
		temp = (dat)/(1023.0);
	}

	temp= temp*100;
	
	return (int)temp;
}
void main(){
 	char cnt = 0;
	char buff[40];
	int dat[6];
	char send[6];
	char flag[6];
	P0M0 = 0;
	P0M1 = 0;
	OLED_Init();			//初始化OLED  
	OLED_Clear(); 		//清除屏幕
	config_UART();
	config_ADC();
	EA = 1;
	//SYN_FrameInfo(0,"飞音云电子");
	OLED_ShowCHinese(0,0,0);//
	OLED_ShowCHinese(18,0,1);//
	OLED_ShowCHinese(36,0,2);//
	OLED_ShowCHinese(54,0,3);//
	OLED_ShowCHinese(72,0,4);//
	sprintf(buff,"Channel: ");
	OLED_ShowString(0,2,buff,16);
	sprintf(buff,"Score: ");
	OLED_ShowString(0,4,buff,16); 
//	
//	OLED_ShowString(0,0,"Date:",16); 
//	OLED_ShowString(0,2,"channel:",16);  	
	while(1){
		if(!K1&&!flag[0]){
//				PrintString1_cnt(send,6);
			dat[0] = Get_ADC10bitResult(0);
			dat[0] = format(dat[0]);
			sprintf(buff,"%d点%d",dat[0]/10,dat[0]%10);
			SYN_FrameInfo(0,buff);
			flag[0] = 1;
			sprintf(buff,"Channel: 1");
			OLED_ShowString(0,2,buff,16);
			sprintf(buff,"Score: %2.1f  ",dat[0]/10.0);
			OLED_ShowString(0,4,buff,16); 
			}else if(K1){
				flag[0] = 0;
			}
		if(!K2&&!flag[1]){
			dat[1] = Get_ADC10bitResult(1);
			dat[1] = format(dat[1]);
			sprintf(buff,"%d点%d",dat[1]/10,dat[1]%10);
			SYN_FrameInfo(0,buff);
			flag[1] = 1;
			sprintf(buff,"Channel: 2");
			OLED_ShowString(0,2,buff,16);
			sprintf(buff,"Score: %2.1f  ",dat[1]/10.0);
			OLED_ShowString(0,4,buff,16); 
			}else if(K2){
				flag[1] = 0;
			}
		if(!K3&&!flag[2]){
			dat[2] = Get_ADC10bitResult(2);
			dat[2] = format(dat[2]);
			sprintf(buff,"%d点%d",dat[2]/10,dat[2]%10);
			SYN_FrameInfo(0,buff);
			flag[2] = 1;
			sprintf(buff,"Channel: 3");
			OLED_ShowString(0,2,buff,16);
			sprintf(buff,"Score: %2.1f  ",dat[2]/10.0);
			OLED_ShowString(0,4,buff,16); 
			}else if(K3){
				flag[2] = 0;
			}
		if(!K4&&!flag[3]){
			dat[3] = Get_ADC10bitResult(3);
			dat[3] = format(dat[3]);
			sprintf(buff,"%d点%d",dat[3]/10,dat[3]%10);
			SYN_FrameInfo(0,buff);
			flag[3] = 1;
			sprintf(buff,"Channel: 4");
			OLED_ShowString(0,2,buff,16);
			sprintf(buff,"Score: %2.1f  ",dat[3]/10.0);
			OLED_ShowString(0,4,buff,16); 
			}else if(K4){
				flag[3] = 0;
			}
		if(!K5&&!flag[4]){
			dat[4] = Get_ADC10bitResult(4);
			dat[4] = format(dat[4]);
			sprintf(buff,"%d点%d",dat[4]/10,dat[4]%10);
			SYN_FrameInfo(0,buff);
			flag[4] = 1;
			sprintf(buff,"Channel: 5");
			OLED_ShowString(0,2,buff,16);
			sprintf(buff,"Score: %2.1f  ",dat[4]/10.0);
			OLED_ShowString(0,4,buff,16); 
			}else if(K5){
				flag[4] = 0;
			}
		if(!K6&&!flag[5]){
			dat[5] = Get_ADC10bitResult(5);
			dat[5] = format(dat[5]);
			sprintf(buff,"%d点%d",dat[5]/10,dat[5]%10);
			SYN_FrameInfo(0,buff);
			flag[5] = 1;
			sprintf(buff,"Channel: 6");
			OLED_ShowString(0,2,buff,16);
			sprintf(buff,"Score: %2.1f  ",dat[5]/10.0);
			OLED_ShowString(0,4,buff,16); 
			}else if(K6){
				flag[5] = 0;
			}
		if(Read_KEY1_Release()){
			dat[0] = Get_ADC10bitResult(0);
			dat[0] = format(dat[0]);
			set_string(send,1,dat[0]);
			PrintString2_cnt(send,6);
			sprintf(buff,"%d点%d已发送",dat[0]/10,dat[0]%10);
			SYN_FrameInfo(0,buff);
			sprintf(buff,"Channel: 1");
			OLED_ShowString(0,2,buff,16);
			sprintf(buff,"Score: %2.1f  ",dat[0]/10.0);
			OLED_ShowString(0,4,buff,16); 
			
		}else if(Read_KEY2_Release()){
			dat[1] = Get_ADC10bitResult(1);
			dat[1] = format(dat[1]);\
			set_string(send,2,dat[1]);
			PrintString2_cnt(send,6);
			sprintf(buff,"Channel: 2");
			OLED_ShowString(0,2,buff,16);
			sprintf(buff,"Score: %2.1f  ",dat[1]/10.0);
			OLED_ShowString(0,4,buff,16); 
			sprintf(buff,"%d点%d已发送",dat[1]/10,dat[1]%10);
			SYN_FrameInfo(0,buff);

		}else if(Read_KEY3_Release()){
			dat[2] = Get_ADC10bitResult(2);
			dat[2] = format(dat[2]);
			set_string(send,3,dat[2]);
			PrintString2_cnt(send,6);
			sprintf(buff,"Channel: 3");
			OLED_ShowString(0,2,buff,16);
			sprintf(buff,"Score: %2.1f  ",dat[2]/10.0);
			OLED_ShowString(0,4,buff,16); 
			sprintf(buff,"%d点%d已发送",dat[2]/10,dat[2]%10);
			SYN_FrameInfo(0,buff);

		}else if(Read_KEY4_Release()){
			dat[3] = Get_ADC10bitResult(3);
			dat[3] = format(dat[3]);
			set_string(send,4,dat[3]);
			PrintString2_cnt(send,6);
			sprintf(buff,"Channel: 4");
			OLED_ShowString(0,2,buff,16);
			sprintf(buff,"Score: %2.1f  ",dat[3]/10.0);
			OLED_ShowString(0,4,buff,16); 
			sprintf(buff,"%d点%d已发送",dat[3]/10,dat[3]%10);
			SYN_FrameInfo(0,buff);

		}else if(Read_KEY5_Release()){
			dat[4] = Get_ADC10bitResult(4);
			dat[4] = format(dat[4]);	
			set_string(send,5,dat[4]);
			PrintString2_cnt(send,6);
			sprintf(buff,"Channel: 5");
			OLED_ShowString(0,2,buff,16);
			sprintf(buff,"Score: %2.1f  ",dat[4]/10.0);
			OLED_ShowString(0,4,buff,16); 
			sprintf(buff,"%d点%d已发送",dat[4]/10,dat[4]%10);
			SYN_FrameInfo(0,buff);

		}else if(Read_KEY6_Release()){
			dat[5] = Get_ADC10bitResult(5);
			dat[5] = format(dat[5]);
			set_string(send,6,dat[5]);
			PrintString2_cnt(send,6);
			sprintf(buff,"Channel: 6");
			OLED_ShowString(0,2,buff,16);
			sprintf(buff,"Score: %2.1f  ",dat[5]/10.0);
			OLED_ShowString(0,4,buff,16); 
			sprintf(buff,"%d点%d已发送",dat[5]/10,dat[5]%10);
			SYN_FrameInfo(0,buff);
		}
		
		
		
	}
}
