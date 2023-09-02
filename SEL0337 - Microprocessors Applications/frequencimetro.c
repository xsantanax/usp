//Frequâncímetro: janela ajustável (base 10) de acordo com a frequencia através do multiplicador da rotina de //50ms.
//Mostra no LCD
#include <at89x52.h>

volatile unsigned char estouros=0;

void estourot1(void)__interrupt(3){
	estouros++;//estouros de TH1
	TF1=0;
	}

void main(void){
	unsigned char tempo=20, flag=1;
	unsigned int pulsos=0;
	}
	TMOD = 0x51; //timer1 como contador 8bits auto-reload
	TH1=0; //valor que TL1 recarrega
	//começar contagem com rotina de atraso de 1ms
	while(1){
		if(!flag){//Rotina de atraso 1: tempo*50ms, 1<tempo<20, 1Hz<freq<20Hz
			TMOD=TMOD | 0x01;//timer0 como timer 16bits
			TR1=1;//começa contagem pulsos
			TR0=1;//começa contagem tempo
			while(tempo>0){
				TH0=59;
				while(!TF0);
				TF0=0;
				tempo--;
				}
			TR0=0;
			TR1=0;//não precisa zerar as TFs
			pulsos=256*estouros+TL1; //atualiza o num de pulsos
			/*n pulsos com tempo=20(atraso 1ms)->freq=n Hz
		  	 n pulsos com tempo=5(atraso (1/4)ms)->freq=n*(20/tempo)*/
			freq=pulsos*20/tempo;
			estouros=0;
			}

		if(flag=1){//Rotina de atraso 2: tempo*1ms, 1<tempo<50, 20Hz<freq<1kHz
			TMOD=TMOD | 0x02;//timer0 como timer 16bits
			TH0=245; //recarga
			TL0=245; //contador 8bits
			TR1=1;//começa contagem pulsos
			TR0=1;//começa contagem tempo
			while(tempo>0){
				while(!TF0);
				TF0=0;
				tempo--;
				}
			TR0=0;
			TR1=0;//não precisa zerar as TFs
			pulsos=256*estouros+TL1; //atualiza o num de pulsos
			/*n pulsos com tempo=20(atraso 1ms)->freq=n Hz
		  	 n pulsos com tempo=5(atraso (1/4)ms)->freq=n*(20/tempo)*/
			freq=pulsos*1000/tempo;
			estouros=0;
			}

		if(flag=2){//Rotina de atraso 3: tempo*10us, 1<tempo<100, 1kHz<freq<100kHz
			TMOD=TMOD | 0x02;//timer0 como timer 16bits
			TH0=245; //recarga
			TL0=245; //contador 8bits
			TR1=1;//começa contagem pulsos
			TR0=1;//começa contagem tempo
			while(tempo>0){
				while(!TF0);
				TF0=0;
				tempo--;
				}
			TR0=0;
			TR1=0;//não precisa zerar as TFs
			pulsos=256*estouros+TL1; //atualiza o num de pulsos
			/*n pulsos com tempo=1(atraso 10us)->freq=n*1000/10 kHz
		  	 n pulsos com tempo=5(atraso 50us)->freq=n*1000/(10*tempo) */
			freq=pulsos*100/tempo;//imprimir kHz
			estouros=0;
			}


		if(pulsos<5){ //Redução da frequencia
			tempo*=2;
			if(tempo>50 && flag=1){//tempo maior que 500us para rotina 2
				flag=0;
				tempo=1; //freq max da rotina 1
				}
			if(tempo>100 && flag=2){//tempo maior que 1ms para rotina 3
				tempo=50;//maior tempo da trotina 2
				flag=1;
				}
			}
		else{ //Aumento da frequencia
			tempo/=2;
			if(tempo<=1 && flag=0){
				flag=1;
				tempo=50; //freq min da rotina 2
				}
			if(tempo<=1 && flag=1){
				flag=2;
				tempo=100; //freq min da rotina 3
				}
			}
		//IMPRESSAO LCD
		}





		