#include <stdio.h>	/*line 1*/
/*line 2*/
int main(){	/*line 3*/
/*line 4*/

	printf("Hello world\n");	/*line 5*/
	//print current line	/*line 6*/
	printf("Line: %d\n",__LINE__);	/*line 7*/
	//reset the line number by 36	/*line 8*/
	#line 36	/*reseting*/
	printf("Line: %d\n",__LINE__);	/*line 37*/
	printf("Bye bye!!!==%d --->  %s\n",__LINE__,__FILE__);	/*line 39*/
/*line 40*/
	return 0;	/*line 41*/
}	
