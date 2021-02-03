#include<stdio.h> 
  
int main() 
{ 
    // Pointer to an integer 
    int i;  
int *p;      
    // Pointer to an array of 5 integers 
    int (*ptr)[5];  
    int arr[5]={1,2,3,4,5}; 
      
    // Points to 0th element of the arr. 
    p = arr; 
      
    // Points to the whole array arr. 
    ptr = &arr;  
      
  //  printf("p = %p, ptr = %p\n", p, ptr); 
      
  //  p+1;  
 //    ptr+1; 
//    printf("p = %p, ptr = %p\n", p, ptr); 
    for (i=0;i<5;i++)
    {  
    printf(" ptr =%d ptr = %d   ptr= %p \n",*(*ptr+i), (*ptr)[i],ptr+i); 
    } 
    for (i=0;i<5;i++)
    {  
    printf(" p = %d   p= %p \n", p[i],p+i); 
    } 
    return 0; 
} 
