#ifndef __DELAY_H
#define __DELAY_H 			   
#include <stm32_sys.h>	  
//////////////////////////////////////////////////////////////////////////////////  
//STM32F407������
//STM32F4����-�⺯���汾
//�Ա����̣�http://mcudev.taobao.com
//********************************************************************************
//�޸�˵��
//��
////////////////////////////////////////////////////////////////////////////////// 	 
void Delay_Init(u8 SYSCLK);
void Delay_ms(u16 nms);
void Delay_us(u32 nus);

#endif




























