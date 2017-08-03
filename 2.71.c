#include <stdio.h>

/* Declaration of data type where 4 bytes are packed
into an unsigned */
typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum)
{
return (word >> (bytenum << 3)) & 0xFF;
}

int main(){

	int x = 0xffff;
	xbyte(x,x);
}
