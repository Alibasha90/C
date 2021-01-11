#include<stdio.h>
#include<string.h>

char *mystr(char *s1,char *s2)
{
int i,j;

	for(i=0;s1[i];i++)
	{
		if(s1[i]==s2[0])
		{
			for(j=i+1;s2[j-i];j++)
			{
				if( s1[j]!=s2[j-i] )
					break;
			}
			if(s2[j-i]=='\0')
				return s1+i;
		}
	}

}



int main()
{
	char s1[100],*ptr;
	char s2[10];

	    

	printf("enter the string:");
	scanf("%s",s1);
	printf("enter the sub:");
	scanf("%s",s2);

	ptr=mystr(s1,s2);

	printf("%ld-- %s",ptr-s1,s2);
}
