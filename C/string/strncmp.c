#include<stdio.h>
#include<string.h>

int mystrncmp(const char *s1,const char *s2,int n)
{
	int i,j;

	for(i=0,j=0;i<n ;i++,j++)
	{
		if( s1[i]==s2[j] )
			continue;
		else
			break;
	}	
	if(i<n && s1[i]==s2[j])
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
	int v,n;



	printf("enter the s1:");
	scanf("%s",s1);
	printf("enter the s2:");
	scanf("%s",s2);
	printf("enter the n:");
	scanf("%d",&n);

	v=mystrncmp(s1,s2,n);
	if(v==0)
		printf("same\n");
	else if(v==-1)
		printf("s2 big\n");
	else
		printf("s1 big\n");


}
