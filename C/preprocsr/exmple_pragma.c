//#pragma pack(1)
//#pragma startup f1


//pragma GCC poison printf    // print  
//#pragma GCC poison func1()    // fun 


#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>

void func1();  
void func2();  
    
void __attribute__((constructor)) func1();  
void __attribute__((destructor)) func2();  

void func1()  
{  
    printf("Inside func1()\n");  
}  
    
void func2()  
{  
    printf("Inside func2()\n");   
}  
    
void f1()
{
	printf("my new f1 function\n");
}

int main()  
{  

    printf("Inside main()\n");          
    return 0;  
}


