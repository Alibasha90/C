#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr1 = arr;
    int *ptr2 = arr + 5; 
printf("Number==%p---%p\n",(ptr1),ptr2);
printf(" two pointer int ptr: %p ,%p \n",ptr2 ,ptr1);

printf("two pointers char ptrs : %p - %p\n",(char*)ptr2,(char*) ptr1);
    return 0;
}
