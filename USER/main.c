/***
		Copyright (c) 2016
		All rights reserved.
		
		�ļ����ƣ�main.c
		�ļ���ʶ��HMI
		ժ    Ҫ������HMI��ʾ�Ĳ��Թ���
		
		
		��ǰ�汾��
		��    �ߣ�Hacker
		������ڣ�2016-1-23 17:29:14
		
		ȡ���汾��
		ԭ����  ��
		������ڣ�
		
		Copyright (c) 2016
		All rights reserved.
		
		File name		        :main.c
		file identification :
		Subject             :A matrix led project based on MAX7219 
							@example Matrix_printf("string");
							Hello World character will be shown on matrix led
		
		Current Version     :
		Author              :Hacker
		Date                :2016-1-23 17:29:14
		
		Instead Version     :
		Date                :
***/

#include "stm32f10x.h"
#include "usart.h"

/* 
 * ��������main
 * ����  : ������
 * ����  ����
 * ���  : ��
 */
int main(void)
{
  
	USART_Config(9600);
	
	printf("Test ON \n");
	
	while(1);
	  // add your code here ^_^��
}
/******************* (C) COPYRIGHT 2016 Hacker *****END OF FILE************/


