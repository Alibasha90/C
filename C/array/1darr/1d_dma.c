#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr=NULL;
	int n;

	printf("enter the no.of elements\n");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory not located\n");
		return 0;
	}
	for(int i=0; i<n  ;i++)
	{
		printf("enter the arr[%d]=",i);
		scanf("%d",&ptr[i]);
	}

	printf("entered  the elements are:-\n");

	for(int i=0; i<n ;i++)
	{
		printf(" %d ",ptr[i]);
	}

printf("\n");

}
