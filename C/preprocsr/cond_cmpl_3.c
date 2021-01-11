#include<stdio.h>
#define macro       /// here i defind so all lines can print.
#undef macro
int main()
{
	printf("start-\n");
//#ifdef macro      		//// if u define then it prints .....
#ifndef macro		//   if not define then only it prints ....
	printf("hello--2\n");
	printf("hello--3\n");
	printf("hello--4\n");
#endif
	printf("end---\n");
}

