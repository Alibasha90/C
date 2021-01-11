#include<stdio.h>
int main()
{
	int i;

	int data=-7;

	for(i=31;i>=0;i--)
	{
		printf("%d",(data>>i)&1);

		if(i==8 || i==16 || i==24)
		printf(" ");
	}

	printf("\n");
}

