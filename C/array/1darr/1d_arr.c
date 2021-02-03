#include<stdio.h>

int main()
{
	int arr[5];
 int *ptr,i;

 ptr = &arr;    /// here pointer can't be assign the address of the var/ array.
  		//   value can be changed ...

	printf("enter the elements\n");
	
	for(i=0;  i<sizeof(arr)/sizeof(arr[0])  ; i++)
	{
		printf("enter the arr[%d]=",i);
		scanf("%d",&arr[i]);
	}

	printf("entered  the elements are:-\n");


	for(int i=0; i<sizeof(arr)/sizeof(arr[0])  ;i++)
	{
		printf(" %d ",arr[i]);
	}

printf("\n");

}
