#include<stdio.h>
#pragma pack(1)

struct tag{    // declaration 
	int a;  // 4 bytes 
	char b; // 1 bytes
	char c;
	int d;

};

int main()
{

	struct tag var={10,'Z'};    // method -- 2

//	var.a=10;  method -- 1
//	var.b='Z';

	printf(" %d  %c \n",var.a , var.b );
printf("sizeof of struct = %ld\n",sizeof(var));


}

