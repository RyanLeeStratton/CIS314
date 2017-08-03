#include <stdio.h>

unsigned replace_byte (unsigned x, int i, unsigned char b){
	unsigned a;
	unsigned d; 
	unsigned y;
	printf("%x\n", x);
	if(i == 0){
	a = x >> (8+(4*(2*i)));
	a = a << (8+(4*(2*i)));
	y = b <<(4*(2*i));
	y = (a | y);
	}
	if(i == 1){
	a = x >> (8+(4*(2*i)));
	a = a << (8+(4*(2*i)));
	y = b <<(4*(2*i));
	y = (a | y);
	d = x << 24;
	d = d >> 24;
	y = (d | y);
	}
	if(i == 2){
	a = x >> (8+(4*(2*i)));
	a = a << (8+(4*(2*i)));
	y = b <<(4*(2*i));
	y = (a | y);
	d = x << (8*i);
	d = d >> (8*i);
	y = (d | y);
}
	if(i ==3){
	a = x << (8);
	a = a >> 8;
	y = b <<(4*(2*i));
	y = (a | y);
	}
	printf("%x\n", y);

}
int main(){
	unsigned int x = 0x12345678;
	int i = 2;
	unsigned char b = 0xAB;
	replace_byte(x,i,b);
}