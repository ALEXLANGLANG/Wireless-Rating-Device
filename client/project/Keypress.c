/************************************************************************/
/**********                     Keypress.C                  *************/
/**********          Written By LKX---20160724              *************/
/**********                  Version 1.0			      ***************/
/************************************************************************/
#include "Keypress.h"


//-----------------------------------------------------------------------
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//-----------------------------------------------------------------------
//----------------------���ݱ�������-------------------------------------
//-----------------------------------------------------------------------
//=======================================================================

//-----------------------------------------------------------------------
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//-----------------------------------------------------------------------
//----------------------���庯��ʵ��-------------------------------------
//-----------------------------------------------------------------------
//=======================================================================



/************��ȡ����״ֱ̬������*************/

u8 Read_KEY1_Release(void)
{
	u8  a = 0;
	KEY1=1;	
	if(KEY1==0)
	{
		delay_ms(1);
		if(KEY1==0)
		{
			while(KEY1==0&&a<100){
				delay_ms(10);
				a++;
			}
			return TRUE;
		}
		else return FALSE;
	}
	else return FALSE;
}

u8 Read_KEY2_Release(void)
{
	u8  a = 0;
	KEY2=1;	
	if(KEY2==0)
	{
		delay_ms(1);
		if(KEY2==0)
		{
			while(KEY2==0&&a<100){
				delay_ms(10);
				a++;
			}
			return TRUE;
		}
		else return FALSE;
	}
	else return FALSE;
}

u8 Read_KEY3_Release(void)
{
	u8  a = 0;
	KEY3=1;	
	if(KEY3==0)
	{
		delay_ms(1);
		if(KEY3==0)
		{
			while(KEY3==0&&a<100){
				delay_ms(10);
				a++;
			}
			return TRUE;
		}
		else return FALSE;
	}
	else return FALSE;
}

u8 Read_KEY4_Release(void)
{
	u8  a = 0;
	KEY4=1;	
	if(KEY4==0)
	{
		delay_ms(1);
		if(KEY4==0)
		{
			while(KEY4==0&&a<100){
				delay_ms(10);
				a++;
			}
			return TRUE;
		}
		else return FALSE;
	}
	else return FALSE;
}

u8 Read_KEY5_Release(void)
{
	u8  a = 0;
	KEY5=1;	
	if(KEY5==0)
	{
		delay_ms(1);
		if(KEY5==0)
		{
			while(KEY5==0&&a<100){
				delay_ms(10);
				a++;
			}
			return TRUE;
		}
		else return FALSE;
	}
	else return FALSE;
}

u8 Read_KEY6_Release(void)
{
	u8  a = 0;
	KEY6=1;	
	if(KEY6==0)
	{
		delay_ms(1);
		if(KEY6==0)
		{
			while(KEY6==0&&a<100){
				delay_ms(10);
				a++;
			}
			return TRUE;
		}
		else return FALSE;
	}
	else return FALSE;
}
/*************��ȡ����״̬************/
u8 Read_KEY1(void)
{
	KEY1=1;
	
	if(KEY1==0)
	{
		delay_ms(1);
		if(KEY1==0)
		{
			return TRUE;
		}
		else return FALSE;
	}
	else return FALSE;
}

u8 Read_KEY2(void)
{
	KEY2=1;
	
	if(KEY2==0)
	{
		delay_ms(1);
		if(KEY2==0)
		{
			return TRUE;
		}
		else return FALSE;
	}
	else return FALSE;
}

u8 Read_KEY3(void)
{
	KEY3=1;
	
	if(KEY3==0)
	{
		delay_ms(1);
		if(KEY3==0)
		{
			return TRUE;
		}
		else return FALSE;
	}
	else return FALSE;
}

u8 Read_KEY4(void)
{
	KEY4=1;
	
	if(KEY4==0)
	{
		delay_ms(1);
		if(KEY4==0)
		{
			return TRUE;
		}
		else return FALSE;
	}
	else return FALSE;
}

/*******************************************************************************
* �� �� ��         : KeyScan_GPIO
* ��������		   : ����а������²���ȡ��ֵ��ȡֵΪ0~15
* ��    ��         : ��
* ��    ��         : ��
*******************************************************************************/
u8 KeyScan_GPIO(void)
{
	char a = 0;
	u8 KeyValue = 17,temp;
	GPIO_KEY=0x0f;
	if(GPIO_KEY!=0x0f)//��ȡ�����Ƿ���
	{
		delay_ms(5);//��ʱ5ms��������
		if(GPIO_KEY!=0x0f)//�ٴμ������Ƿ���
		{
			
			//������
			GPIO_KEY=0X0F;
			temp = GPIO_KEY;
			switch(GPIO_KEY)
			{
				case(0X07):	KeyValue=0;break;
				case(0X0b):	KeyValue=4;break;
				case(0X0d): KeyValue=8;break;
				case(0X0e):	KeyValue=12;break;
			}
			//������
			GPIO_KEY=0XF0;
			temp  = GPIO_KEY;
			switch(GPIO_KEY)
			{
				case(0X70):	KeyValue=KeyValue+3;break;
				case(0Xb0):	KeyValue=KeyValue+2;break;
				case(0Xd0): KeyValue=KeyValue+1;break;
				case(0Xe0):	KeyValue=KeyValue;break;
			}
			while((a<100) && (GPIO_KEY!=0xf0))	 //��ⰴ�����ּ��
			{
				delay_ms(10);
				a++;
			}
		}
	}
	return KeyValue;
}
void Key_Scan()
{
	switch(KeyScan_GPIO())
	{
		case 0:
			
			break;
	
		case 1:
		
			break;
		
		case 2:
		
			break;
		
		case 3:
		
			break;
		
		case 4:
	
			break;
		
		case 5:
		
			break;
		
		case 6:
	
			break;
		
		case 7:
		
			break;
		
		case 8:
	
			break;
	
		case 9:
	
			break;
		
		case 10:

			break;
		
		case 11:

			break;
		
		case 12:

			break;
		
		case 13:

			break;
		
		case 14:

			break;
		
		case 15:

			break;

	}
}
//=======================================================================
//--------------------------End of Keypress.C----------------------------
//=======================================================================