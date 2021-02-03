#include<stdio.h>
   			//  1d array ---> pointer 
int main()
{
    int my_arr[5] = {1, 2, 3, 4, 5}, i;
    int *p=NULL;
    int **dptr=NULL;
    p = my_arr;
    dptr=&p;
    // p = &my_arr[0]; // you can also do this

/*    for(i = 0; i < 5; i++)
    {
        printf("Value of a[%d] = %d\t", i, *(p + i) );
        printf("Address of a[%d] = %p\n", i, p + i );
    }

  */ 
    for(i = 0; i < 5; i++)
    {
        printf("Value of a[%d] = %d\n", i, *(*(dptr+i) ) );
//        printf("Address of a[%d] = %p\n", i, p + i );
    // signal to operating system program ran fine
    }

    printf("\n");

    return 0;
	
}
