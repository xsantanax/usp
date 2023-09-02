#include <at89x52.h>

void initserial(void){
	SCON = 0x50;
	TMOD = 0x20;
	TL1 = 253;
	TH1 = 253;
	TR1 = 1;
	}

void enviafrase(char *p){
	while(*p){    /*verificar quando o valor de p será 0 = fim da frase*/
		SBUF=*p;
		while(!TI);  /*espera acabar de enviar*/
		TI=0;
		p++;
		}
	}

void envianum(char num){
	char aux;
	
	aux=num;
	if(aux<0){
		aux*=-1;
		SBUF=0x2D;//'-'
		while(!TI);
			TI=0;
		}
	if(aux/100>0){
		SBUF=aux/100+48;/*envia centena, se tiver*/
		while(!TI);
		TI=0;
		}
	aux=aux%100;//pega dezena, se tiver
	SBUF=(aux/10)+48;//ASCII da dezena
	while(!TI);
	TI=0;
	SBUF=(aux%10)+48;//ASCII da unidade
	while(!TI);
	TI=0;
	SBUF = '\n';
	while(!TI);
	TI=0;
	SBUF = '\r';
	while(!TI);
	TI=0;
	}







	