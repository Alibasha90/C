#include<stdio.h>
#include<stdlib.h>
#include<myheader.h>




int main(int argc,char * argv[])
{
	long x= atoi(argv[1]);
	long y= atoi(argv[2]);
	double ans1=add(x,y);
	double ans2=sub(x,y);
	double ans3=mul(x,y);
//	double ans4=mydiv(x,y);


	printf("add=%lf\n",add(x,y));
	printf("sub=%lf\n",sub(x,y));
	printf("mul=%lf\n",mul(x,y));
//	printf("div=%lf\n",mydiv(x,y));
}


