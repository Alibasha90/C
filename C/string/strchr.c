#include<stdio.h>
#include<string.h>

char *mystr(char *s1,char ch)
{
int i,j;

	for(i=0;s1[i];i++)
	{
		if(s1[i]==ch)
		{
				return s1+i;
		}
	}

}



int main()
{
	char s1[100],*ptr;
	char ch;

	    

	printf("enter the string:");
	scanf("%s",s1);
	printf("enter the character:");
	scanf(" %c",&ch);

	ptr=mystr(s1,ch);

	printf("found at-%ld  %c\n",ptr-s1,ch);
}
