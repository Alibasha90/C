
#include<stdio.h>
#include<string.h>


int main()
{
    char str[20];  // declaration
    printf("Enter name: "); 
    scanf("%s", str);

for(int i=0;i<strlen(str)+1 ;i++)
{
    printf("%c\n", str[i]);
}

printf("string length=%d\n\n",strlen(str));

    return 0;
}
