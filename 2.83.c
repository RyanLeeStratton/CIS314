#include <stdio.h>


unsigned	f2u(float	x)	{		
void	*y	=	&x;		
return	*(unsigned*)y;		
}	


int float_le(float x, float y) {
unsigned ux = f2u(x);
unsigned uy = f2u(y);
/* Get the sign bits */
unsigned sx = ux >> 31;
unsigned sy = uy >> 31;
/* Give an expression using only ux, uy, sx, and sy */
return ;
}