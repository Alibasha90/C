#include<stdio.h>


void fun(int (*ptr)[3],int row ,int col)
{
 
   int i, j;
   
   for(i=0; i<row; i++) 
   {
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
//         printf("%d ", *( *(ptr+i) + j) );
         if(j==col-1){
            printf("\n");
         }
      }
   
  }

}

int main()
{

	int row=2;
	int col=2;

	int arr[3][3];


	fun(arr,row,col);


   return 0;
}




