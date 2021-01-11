#include<stdio.h>

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};

	for(int i=0; i<10  ;i++)
	{
	printf(" %d ",arr[i]);
	}
	int **p=&arr;
	
//	printf("arr---> %p ptr-->%p",arr,**p);

	for(int i=0; i<10  ;i++)
	{
		printf("enter the arr %p -%p =\n",arr+i,p+i);
	printf("enter the arr---> %d  %d \n",arr[i],*(p+i) );
//		scanf("%d",&*(p[i]));
	}
//
/*	printf("entered  the elements are:-\n");
	for(int i=0; i< 10 ;i++)
	{
		printf(" %d ",*((*p)+i));
	}

printf("\n");
*/
}
