#include<stdio.h>

int main()
{
	int arr[5];
int (*ptr1)[5],*ptr2;

//ptr1=arr;
//ptr2=&arr;

for(int i=0;i<5;i++)          ////    arr --> first element address
{				///   &arr --> whole array 

printf("arr+i = %p --- (&arr)+i = %p\n",arr+i,&arr+i);
//printf("arr+i = %d --- (&arr)+i = %d\n",arr[2],*(&arr)+2);


}
printf("arr = %ld &arr = %ld-%ld\n", sizeof(arr),sizeof(&arr),sizeof(ptr1+1)-sizeof(ptr1));
printf("\n");

}
