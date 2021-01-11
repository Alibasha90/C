#include<stdio.h>
 
void swap (char *x, char *y)
{
    char *t = x;
    x = y;
    y = t;
}
 
int main()
{
    char *x = "geeksquiz";
    char *y = "geeksforgeeks";
    char *t;
    swap(x, y);
    printf("(%s, %s)\n", x, y);
    t = x;
    x = y;
    y = t;
    printf("%s, %s\n", x, y);
    return 0;
}
