#include<stdio.h>
extern int ex;


static const int e;         ///                   (  bss    )
static const int f=100;    /// segmentation fault ( .rodata )


const int c;      /// can modify with pointer     (  bss    )
const int d=50;  ///  segmentation fault          ( .rodata )


int main()
{
	int *p;
	int local_un_in;      //                  ( stack)
	int local_in=10;     //                   ( stack)

	const int a;  /// can modify with pointer ( stack)
	const int b=20;   // can modify with pointers (stack)
//p=&f;
*p=10;

	

printf("%d %d\n",*p,f);
}
