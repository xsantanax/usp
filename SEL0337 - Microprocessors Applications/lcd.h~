/*----------------------------- Display LCD -------------------------------
COMUNICACAO: P0=RS,RW,EN,NC,DB7~DB4
	     P2=DB0~DB3,NC,NC,NC,NC */

#include <at89x52.h>
#include "atraso.h"


#define EN P0_2
/*BORDA SUBIDA = HABILITA CK E LEITURA DAS PORTAS*/
#define RW P0_1
/*'0'=ESCRITA*/
#define RS P0_0 
/*'0'=INSTRUÇÃO, '1'=DADO*/

#define DB7 P0_7
#define DB6 P0_6
#define DB5 P0_5
#define DB4 P0_4

#define DB3 P2_3
#define DB2 P2_2
#define DB1 P2_1
#define DB0 P2_0

#define apagaLCD imprimeInst(0x01)
#define apagaLCD4bits imprimeInst4bits(0x01)

void divideMsg (unsigned char);
void imprimeDado (unsigned char *);
void imprimeInst(unsigned char);
void initLCD(void);
void posicionaCursor(unsigned char, unsigned char);
void imprimeDado4bits (unsigned char *);
void imprimeInst4bits(unsigned char);
void initLCD4bits(void);
void posicionaCursor4bits(unsigned char, unsigned char);


/*----------------------------- Display LCD em 8 bits ----------------------------------*/

void divideMsg(unsigned char msg){
	P0=msg&0xF0;     		/*mantem nibble mais significativo*/
	P2=msg;		 		/*envia nibble menos significativo*/
	return;
	}

void imprimeChar(unsigned char msg){
	divideMsg(msg);
	RS=1;			/*dado*/
	EN=1;
	atraso(15);
	EN=0;
	return;
	}

void imprimeFrase(unsigned char *msg){
	unsigned char i=0;
	while(*msg){			/*verifica fim da string*/
		divideMsg(*msg);
		RS=1;			/*dado*/
		EN=1;
		atraso(15);
		EN=0;
		msg++;
		i++;
		if(i==15)
			posicionaCursor(0, 2);		/*vai para linha 2*/
		}
	return;
	}

void imprimeInst(unsigned char inst){
	divideMsg(inst);
	EN=1;
	atraso(15);
	EN=0;
	return;
	}

void initLCD(void){
	imprimeInst(0x38);		/*duas linhas e 8bits*/
	imprimeInst(0x0F);		/*liga LCD e pisca cursor*/
	imprimeInst(0x06);		/*LCD para receber e cursor move para direita*/
	return;
	}

void posicionaCursor(unsigned char end, unsigned char lin){		/*end=endereço em que se deseja imprimir*/
	if (lin=1){
		end=end+0x80;
		imprimeInst(end);
		}
	if (lin=2){
		end=end+0xC0;			/*primeira posição da seg.linha=40h*/
		imprimeInst(end);
		}
	return;
	}
/*------------------------------Display LCD em 4 bits---------------------------------*/

void imprimeChar4bits (unsigned char msg){
	P0=msg&0xF0;/*nibble mais significativo*/
	RS=1;
	EN=1;
	atraso(15);
	EN=0;
	P0=(msg<<4)&0xF0;/*nibble menos significativo*/
	RS=1;
	EN=1;
	atraso(15);
	EN=0;
	return;
	}
	
void imprimeFrase4bits (unsigned char *msg){
	char i=0;
	while(*msg){
		P0=*msg&0xF0;/*nibble mais significativo*/
		RS=1;
		EN=1;
		atraso(15);
		EN=0;
		P0=(*msg<<4)&0xF0;/*nibble menos significativo*/
		RS=1;
		EN=1;
		atraso(15);
		EN=0;
		msg++;
		i++;
		if(i==15)
			posicionaCursor4bits(0,2);/*vai para linha 2*/
		}
	return;
	}

void imprimeInst4bits(unsigned char msg){
	P0=msg&0xF0;    		/*nibble mais significativo*/
	EN=1;
	atraso(15);
	EN=0;
	P0=(msg<<4)&0xF0;		/*nibble menos significativo*/
	EN=1;
	atraso(15);
	EN=0;
	return;
	}

void initLCD4bits(void){
	imprimeInst(0x28);		/*duas linhas e 4bits. Instrução em 8bits*/
	imprimeInst4bits(0x0F);		/*liga LCD e pisca cursor*/
	imprimeInst4bits(0x06);		/*LCD para receber e cursor move para direita*/
	atraso(100);
	return;
	}

void posicionaCursor4bits(unsigned char end, unsigned char lin){	/*end=endereço em que se deseja imprimir.
						pos 1 da linha 2=0x40*/
						/*0x80=instrução de posicionamento*/
	if (lin=1){
		end=end+0x80;
		imprimeInst4bits(end);
		}
	if (lin=2){
		end=end+0xC0;			/*primeira posição da seg.linha=40h*/
		imprimeInst4bits(end);
		}
	return;
	}


