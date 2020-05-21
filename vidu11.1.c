#include <stdio.h>

void main()
{	int num[9];
	int i;
	num[0]=10;
	num[1]=20;
	num[2]=30;
	num[3]=50;
	num[4]=100;
	num[5]=123;
	num[6]=12313;
	num[7]=3123;
	num[8]=123123;
	for(i=0; i<9; i+=3)	
	printf("\n number at [%d] is %d ",i,num[i]);
}
