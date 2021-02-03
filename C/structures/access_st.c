#include<stdio.h>


struct st
{
	int a;
	char ch;
}b;

int main()
{

	struct st b ={ 1,'2'};

	printf("%p--->%d %c\n", (struct st *)&b , b.a , b.ch);
	printf("%p--->%d %d\n", (struct st *)&b+1 , b.a , b.ch);
}
