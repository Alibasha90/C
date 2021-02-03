
#include <stdio.h> 


// A normal function with an int parameter 
// and void return type 

void fun(int a) 
{ 
    printf("Value of a is=%d	\n",a); 
    
} 
  
int main() 
{  
    //int (*fun_ptr)() = &fun;  //            method - 1
  void (*fun_ptr)(int) = fun;       // & removed  method - 2

//    (*fun_ptr)();  //                       method - 1
     fun_ptr(10);     //  *removed              method - 2
    return 0; 
}

