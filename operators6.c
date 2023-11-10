#include<stdio.h>
void main()
{
	int x=18, y=12 ,z=9, a;
	
	
	a=(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z)+(3*(z+x)));
	printf("\n(x-y-z)3=%d\n",a);

}