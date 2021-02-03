#include<stdio.h>
int main()
{
	int i,n,j;
	char s1[100];
	char s2[100];
	printf("enter the s1:");
	scanf("%s",s1);
	printf("enter the s2:");
	scanf("%s",s2);

	printf("enter how many bytes:");
	scanf("%d",&n);
for(i=0;s1[i];i++);

	for(j=0;s2[j] && j< n;i++,j++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';

	printf("s1=%s\n",s1);
}


