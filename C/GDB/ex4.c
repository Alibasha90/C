#include<stdio.h>
int fun()
{
	printf("fun\n");
	return 1;

}

int main()
{
	printf("this is main()\n");
	printf("you returned = %d\n",fun());
}
