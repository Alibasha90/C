#include<stdio.h>

int add(int a,int b);   // prototypre
int mul(int a,int b);
int sub(int a,int b);
int div(int a, int b);

int main()
{
int total;
int a=10,b=20;
printf("main sum=%d\n",add(a,b) );
printf("main mul=%d\n",mul(a,b) );
printf("main sub=%d\n",sub(a,b) );
printf("main div=%d\n",div(a,b) );
}

int add(int a,int b)
{
return a+b;
}

int mul(int a,int b)
{
	return a*b;
}

int sub(int a,int b)
{
	return a-b;
}

int div(int a, int b)
{
	return a/b;
}
