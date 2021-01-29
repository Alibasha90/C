#include<stdio.h>
int main()
{
	int i,n;
	char s1[100];
	char s2[100];
	printf("enter the s1:");
	scanf("%s",s1);
//	printf("enter the s2:");
//	scanf("%s",s2);

	printf("enter how many bytes:");
	scanf("%d",&n);

	for(i=0;s1[i] && i< n;i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';

	printf("s2=%s\n",s2);
}


