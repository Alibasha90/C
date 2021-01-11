#include<stdio.h>  
const int size = 4; 
  
void main() 
{ 
  
    // array of pointers to a character 
    // to store a list of strings 
    char* names[] = { 
        "allahu", 
        "akbar", 
        "ya rabbi", 
        "salli ala"
    }; 
  
    int i = 0; 
  
    for (i = 0; i < size; i++) { 
        printf("%s\n", names[i]); 
    } 
} 
