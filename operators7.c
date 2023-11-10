#include<stdio.h>
void main()
{
	int x=18, y=12 ,z=9, a;
	
	a=(x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	printf("\n(x+y+z)2=%d",a);
}