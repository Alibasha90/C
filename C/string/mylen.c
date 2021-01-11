#include<stdio.h>
#include<string.h>
void mylen()
{
	int i;
	char s1[100];
	printf("enter the string:");
	scanf("%s",s1);
	for(i=0;s1[i];i++);

	printf("string length=%d\n\n\n",i);
	printf("string==%ld\n",strlen(s1));
}


int main()
{


mylen();	

}
