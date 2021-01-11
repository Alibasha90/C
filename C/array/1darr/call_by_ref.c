/*

#include <stdio.h>
void disp( int num)
{
    printf("%d ", num+1);
}

int main()
{
     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
     for (int i=0; i<10; i++)
     {
         * Passing addresses of array elements*/
 //        disp (&arr[i]); // call by ref
     //    disp (arr[i]); // call by value 
/*
     }

     printf("\n");

     return 0;
}


*/

#include <stdio.h>
void disp( char ch)
{
   printf("%c ", ch+1);
}
int main()
{
   char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
   for (int x=0; x<10; x++)
   {
       /* I’m passing each element one by one using subscript*/
       disp (arr[x]);
   }

   return 0;
}

