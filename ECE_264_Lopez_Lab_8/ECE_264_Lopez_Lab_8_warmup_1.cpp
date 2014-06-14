//ECE 264
//Lab # 7
//Warm-up # 1
//Emilio Lopez
//The goal of this program is to print and scan a matrix using a function as well
#include <stdio.h>
#define ROW 3
#define COL 2
void print2D(int [][2]);
int main()
{  
	//part a
	//int i,j;
	//
	//int arr[ROW][COL] = {{4,6},{7,9},{5,8}};//initialize the 2D array

	//for (i=0;i<ROW;i++)
	//{
	//	for (j=0;j<COL;j++)
	//		printf("%d ",arr[i][j]);

	//	printf("\n");
	//}

	//part b

	//int arr[ROW][COL];
	//int i,j;
	//arr[0][0]=4;
	//arr[0][0]=6;
	//arr[1][0]=7;
	//arr[1][1]=9;
	//arr[2][0]=5;
	//arr[2][1]=8;

	//part c

	//int i,j;

	//int arr[ROW][COL];

	//for (i=0;i<ROW;i++)
	//{
	//	for (j=0;j<COL;j++)
	//	{
	//		printf("[i] [j] (seperate by hitting enter) = ");
	//		scanf("%d",&arr[i][j]);
	//	}
	//	
	//	printf("\n");
	//}

	//for (i=0;i<ROW;i++)
	//{
	//	for (j=0;j<COL;j++)
	//		printf("%d ",arr[i][j]);

	//	printf("\n");
	//}

	//partd

	int arr[ROW][COL] = {{4,6},{7,9},{5,8}};//initialize the 2D array
	print2D(arr);

	return 0;
}

//function is for for part D
void print2D (int arr[][2])
{
	int i,j;
	for (i=0;i<ROW;i++)
	{
		for (j=0;j<COL;j++)
			printf("%d ",arr[i][j]);

		printf("\n");
	}
}
