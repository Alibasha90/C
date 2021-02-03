#include<stdio.h>
#define row 3
#define col 3
int main()
{
//	int arr[5]; /// declaration 

	int _arr[][3]={ {1,2,3},
			{4,5,6},
       			{7,8,9}	};  // define

//printf("size of array=%ld\n",sizeof(arr) / sizeof(arr[0]) );

	for(int i=0; i< row ; i++)
	{

		for(int j=0; j< col ; j++)
		{
			printf("arr[%d][%d] = %d\n", i,j,_arr[i][j] );
		}
	}


}
