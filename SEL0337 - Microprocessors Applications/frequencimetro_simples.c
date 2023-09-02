//Frequâncímetro: conta número de pulsos em janela de 1s (1Hz<freq<500kHz)ou 10s (0.1Hz<freq<0.9Hz)
//Mostra no LCD

//455khz e a frequencia maxima

#include <at89x52.h>
#include "lcd.h"

char ndigitos=0; //deve ser signed por causa do for
volatile unsigned char estouros=0;
char ascii[6]={48,48,48,48,48,48};  //cm, dm, m, c, d, u
//endereço da string é melhor ser alocado como global ao invés de ficar alocando e desalocando, ou usar malloc que mantém alocado

void asciiNum (long int);
long int pow(long int, unsigned char);

void estourot1(void)__interrupt(3){ //overflow Timer1
	estouros++;//estouros de TH1
	TF1=0;
	}

void main(void){
	unsigned char tempo;
	char i;//deve ser signed por causa do for
	unsigned int freq; //4bytes

	TMOD=0x51; //timer1 como contador 16bits, timer0 como timer 16bits
	EA = 1;
	initLCD4bits();

	while(1){
		apagaLCD4bits;
		for(i=0; i<6; i++)
			ascii[i]=48; //reinicia vetor da frequencia em ascii
		estouros=0;

		tempo=20; //scaler pro timer que conta 1s (255 *(255-59)*20)
		TH1=0;
		TL1=0;
		TR1=1;//começa contagem pulsos
		TH0=59;//janela de 1 segundo
		TR0=1;//começa contagem tempo
		

		//contagem por 1s
		while(tempo>0){
			while(!TF0);
			TF0=0;
			tempo--;
			}
		TR1=0; //para contagens
		TR0=0;

		//num de pulsos em 1s
		freq=65535*estouros+256*TH1+TL1;

		//IMPRESSAO no LCD
		imprimeFrase4bits("f: ");
		asciiNum(freq);
		for(i=ndigitos; i>=0; i--)
			imprimeChar4bits(ascii[i]);
		}
	}

long int pow(long int base, unsigned char pot){
	unsigned char i;
	long int resp=base;
	
	for(i=1; i<pot; i++){
		resp*=base;
		}
	return(resp);
	}

void asciiNum (long int num){//Imprime número decimal (ASCII), ord=ordem da base 10
	char i=5;
	long int a;

	ndigitos=0;
	while(i>0){
		a=pow(10,i);
		if(num/a>0){
			ascii[i]=num/a+48; //ascii do digito
			if(ndigitos==0) //se ndigitos ainda não foi alterado
				ndigitos=i;
				//salva num de digitos validos em rel. ao indice de ascii
			num=num%a;
			}
		i--;
		}
	ascii[0]=(num%10)+48;//ASCII da unidade
	}