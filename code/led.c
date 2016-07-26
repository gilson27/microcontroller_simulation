#include <reg51.h>
void main() {
	unsigned int x;
	for(;;){
		P1= 0x55;
		for(x=0;x<4444;++x);
		P1=0xAA;
		for(x=0;x<4444;++x);
	}
}