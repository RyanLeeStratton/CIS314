#include <stdio.h>

int main(){

	int x = 0x89ABCDEf;
	int y = 0x76543210;
	int z = 0;

	printf("the value of x is: %x\n\n", x);
	printf("the value of y is: %x\n\n", y);
	z = (x << 24);
	z = (z >> 24);
	z = (0x000000FF & z);
	y = (y >> 8);
	y = (y << 8);
	z = (z | y);

	
	printf("the combined value is: %x\n\n", z);
}	