#include<stdio.h>
#include<string.h>

int mystrcmp(const char *s1,const char *s2)
{
	int i,j;

	for(i=0,j=0;s1[i] && s1[j] ;i++,j++)
	{
		if(s1[i]!=s2[j] )
			break;
	}
	if(s1[i]=='\0' && s2[j]=='\0' )
		return 0;

	else if(s1[i]>s2[j])
		return 1;

	else
		return -1;


}


int main()
{
	char s1[100];
	char s2[100];
	int v;



	printf("enter the s1:");
	scanf("%s",s1);
	printf("enter the s2:");
	scanf("%s",s2);

	v=mystrcmp(s1,s2);
	if(v==0)
		printf("same\n");
	else if(v==-1)
		printf("s2 big\n");
	else
		printf("s1 big\n");


}
