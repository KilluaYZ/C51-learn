/*
C51开发版中，控制蜂鸣器的是P25
现象：让蜂鸣器发出声音，一段时间后停止
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

