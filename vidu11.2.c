#include <stdio.h>
void main()
{	int ary[10];
	int i, total, high;
	for(i=0;i<10;i++)
	{	printf("\n enter value %d: ", i+1);
	scanf("%d",&ary[i]);
	}
	high=ary[0];
	for (i=1;i<10;i++)
	{if (ary[i] > high)
	high=ary[i];
	}
	printf("\n highlest value entered was %d", high);
	for(i=0, total=0;i<10; i++)
	total=total+ary[i];
	printf("\n the average of the elenment of ary is %d", total/i);
}
