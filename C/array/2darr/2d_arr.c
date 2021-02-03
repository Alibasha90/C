#include<stdio.h>
#define row 3
#define col 3

int main(){

   int arr[row][col];
   
   int i, j;
   
   for(i=0; i<row; i++) 
   {
      for(j=0;j<col;j++)
      {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
  

   printf("Two Dimensional array elements:\n");

   for(i=0; i<row; i++)
   {
      for(j=0;j<col;j++)
      {
         printf("%d ",arr[i][j]);
         if(j==col-1){
            printf("\n");
         }
      }
   }
   return 0;
}




