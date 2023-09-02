#include "mbed.h"
#include "nbprint.h"

/*
int main() {
    nbprint_setup();
    while(1) {
        nbprint("HELLO\r\n");
        led = 1;
        wait(0.25);
        led = 0;
        wait(0.25);
    }
}
*/

Serial pc(USBTX, USBRX);
PwmOut servo(PTA12);
PwmOut motor(PTA5);

int char_to_int(char c) {
	switch (c) {
		case '1':
			return 1;
		break;
		case '2':
			return 2;
		break;
		case '3':
			return 3;
		break;
		case '4':
			return 4;
		break;
		case '5':
			return 5;
		break;
		case '6':
			return 6;
		break;
		case '7':
			return 7;
		break;
		case '8':
			return 8;
		break;
		case '9':
			return 9;
		break;
		case '0':
			return 0;
		break;
		case 't':
			return 10;
		break;
		default:
			return 3;
		break;
	}
}

int main() {
	pc.printf("L, C or R ");
	servo.period(0.020);
	motor.period_ms(10);
	motor.pulsewidth_ms(3);
	while (1) {
		char c = pc.getc();
		pc.printf("%c ", c);
		switch (c) {
			case 'l':
			case 'L':
				servo.pulsewidth(0.0006);
			break;
			case 'r':
			case 'R':
				servo.pulsewidth(0.0011);
			break;
			case 'c':
			case 'C':
				servo.pulsewidth(0.00085);
			break;
			default:
				motor.pulsewidth_ms(char_to_int(c));
			break;
		}
		/*for(float offset = 0.0; offset < 0.0006; offset += 0.0001) {
			servo.pulsewidth(0.0006 + offset);
			wait(0.25);
		}
		for(float offset = 0.0005; offset >=0.0002 ; offset -= 0.0001) {
			servo.pulsewidth(0.0005 + offset);
			wait(0.25);
		}*/
	}
}
