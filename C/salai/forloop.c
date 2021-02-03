#include<stdio.h>
int main()
{
	int i=10;

	printf("for loop output:-\n");
	for(i=10;i>=0;i--)
	{
		printf("i=%d \n",i); /// 10 9 8 7 6 5 4 3 2 1

	}

	printf("while loop output:-\n");

	i=10;
	while(i>=0)
	{


		printf("i=%d \n",i); /// 10 9 8 7 6 5 4 3 2 1

		i--;
	}
	printf("\n");
}
