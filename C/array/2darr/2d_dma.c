#include<stdio.h>
#include<stdlib.h>

#define row 3
#define col 3

int main(){

   int **ptr;
   
   int i, j;
   ptr=(int **)calloc(row,col*sizeof(int));

   for(i=0; i<row; i++) 
   {
	   ptr[i]=(int*)malloc(col*sizeof(int));
      for(j=0;j<col;j++)
      {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &ptr[i][j]);
      }
   }
  

   printf("Two Dimensional array elements:\n");

   for(i=0; i<row; i++)
   {
      for(j=0;j<col;j++)
      {
         printf("%d ",ptr[i][j]);
         if(j==col-1){
            printf("\n");
         }
      }
   }
   return 0;
}




