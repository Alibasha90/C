///  array pass to the function collected by the pointer
//   1d array collect by the pointer...


#include<stdio.h>

void fun(int *ptr,int size)  // collecting *ptr and size 
{
	

	printf("enter the elements\n");
	
	for(int i=0; i<size  ;i++)
	{
		printf("enter the arr[%d]=",i);
		scanf("%d",&ptr[i]);
	}

	printf("entered  the elements are:-\n");
	for(int i=0; i<size ;i++)
	{
		printf("arr[%d]=%d\n",i,ptr[i]);
	}

printf("\n");

}



int main()
{
	int arr[10];
	int size=sizeof(arr)/sizeof(arr[0]);

	fun(arr,size); // passing array and size 
}
