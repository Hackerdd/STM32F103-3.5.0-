/***
		Copyright (c) 2016
		All rights reserved.
		
		文件名称：main.c
		文件标识：HMI
		摘    要：基于HMI显示的测试工程
		
		
		当前版本：
		作    者：Hacker
		完成日期：2016-1-23 17:29:14
		
		取代版本：
		原作者  ：
		完成日期：
		
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
 * 函数名：main
 * 描述  : 主函数
 * 输入  ：无
 * 输出  : 无
 */
int main(void)
{
  
	USART_Config(9600);
	
	printf("Test ON \n");
	
	while(1);
	  // add your code here ^_^。
}
/******************* (C) COPYRIGHT 2016 Hacker *****END OF FILE************/


