#include<stdio.h>

int a=20;               /////////  data section   extern
int b;                ///////     .bss section



int main()
{
int a=10;    /// loal variable auto    stack section
//int a=30;

printf("a=%d\n",a);

}

auto
register 
static 
extern 
