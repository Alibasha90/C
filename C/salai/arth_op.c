#include<stdio.h>
int main()
{
	int a=1,b=2,c=3,d=4,e=5,f=6;

	int output= a / b * c * d / e * f; //// 1) *  /  %  -> L->R 
 // 3-12=-9         3   12
 //
 //
 //                 1 * 2 + 3 * 4 /5 - 6
 //                   2   +   2      - 6
 //                        4     - 6
 //                        -2
 //
	printf("%d\n",output);
}
