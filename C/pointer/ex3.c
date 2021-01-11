
#include<stdio.h> 
  
/* Swaps strings by swapping pointers */   



void swap1(char **str1_ptr, char **str2_ptr) 
{ 
printf("%p ----> %s\n",*str1_ptr,*str1_ptr);
  char *temp = *str1_ptr; 
  *str1_ptr = *str2_ptr; 
  *str2_ptr = temp; 
}

   
int main() 
{ 
  char *str1 = "geeks"; 
  char *str2 = "forgeeks"; 
  swap1(&str1, &str2); 
  printf("str1 is %s, str2 is %s\n", str1, str2); 
  
  return 0; 
} 

