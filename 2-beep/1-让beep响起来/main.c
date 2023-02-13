/*
C51�������У����Ʒ���������P25
�����÷���������������һ��ʱ���ֹͣ
*/

#include "reg52.h"
typedef unsigned int u16;
typedef unsigned char u8;

sbit BEEP=P2^5;

void delay_10us(u16 ten_us){
 	while(ten_us--);
}

int main(){
 	u16 i = 0;
	while(1){
		i = 10000;
	 	while(i--){
		 	BEEP =!BEEP;
			delay_10us(100);
		}
		BEEP=0;

		i = =1000;
		while(i--){
		 	BEEP =! BEEP;
			delay_10us(1000);
		}
		BEEP=0;
		i = 100;
		while(i--){
		 	BEEP =! BEEP;
			delay_10us(10000);
		}
		BEEP=0;
	}
}

