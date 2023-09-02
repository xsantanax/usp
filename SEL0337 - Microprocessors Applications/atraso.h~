/*Atrasos em ms*/

#include <at89x52.h>

void atraso(unsigned char tempo){
	if(tempo==1){
		/* 32*(255-224)=992us*/
		TMOD=TMOD & 0xF0;
		TL0=0;    /*prescaler de 5bits*/
		TH0=224;
		TR0=1;
		while(!TF0);
		TF0=0;
		TR0=0;
		return;
		}
	if(tempo==15){
		TMOD=TMOD & 0xF0;   /*prescaler*/
		TL0=0;
		TH0=224;
		TR0=1;
		while(tempo>0){
			while(!TF0);
			tempo--;
			TF0=0;
			TH0=224;
			}
		TR0=0;
		return;
		}
	if(tempo==100){	/*2*50ms*/
		TMOD=TMOD | 0x01;/*16bits*/
		TR0=1;
		while(tempo>98){
			TH0=59;
			while(!TF0);
			TF0=0;
			tempo--;
			}
		TR0=0;
		return;
		}
	}
