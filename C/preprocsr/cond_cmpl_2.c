#include<stdio.h>
#define macro 1    /// here if condition is true then it going to execute...

int main()
{
	printf("hello--1\n");

#if macro>100      		
	{
	printf("if statement\n");
	}

printf("out of c\n");

#elif maro<100
	printf("elif\n");



#else 
	printf("else\n");


#endif

}

