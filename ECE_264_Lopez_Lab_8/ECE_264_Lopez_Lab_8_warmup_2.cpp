//ECE 264
//Lab # 7
//Warm-up # 2
//Emilio Lopez
//The goal of this program is to create 2 matricies and reconfigure them with different methods
#include <stdio.h>
void printMatrix(int arr[][6], int);
void MatrixAddition(int A[][6], int B[][6], int sum[][6],int DIM);
void MatrixSubtraction(int A[][6], int B[][6], int dif[][6],int DIM);
void MatrixMultiplication(int A[][6], int B[][6], int dif[][6],int DIM);
void MatrixTranspose(int A[][6], int result[][6], int DIM);
int main()
{  
	int size=6;
	int dim,i,j;
	int a[6][6], b[6][6], result[6][6];

	printf("Please enter a dimension equal or less than 6: ");
	scanf("%5d",&dim);

	while(dim>6)
	{
		printf("Please reenter a dimension equal or less than 6: ");
		scanf("%5d",&dim);
	}
	//a

	printf("Please enter the values for matrix a:\n");

	for (i=0;i<dim;i++)
	{
		for (j=0;j<dim;j++)
		{
			printf("[i] [j] (seperate by hitting enter) = ");
			scanf("%5d",&a[i][j]);
		}
		
		printf("\n");
	}

		//b

	printf("Please enter the values for matrix b:\n");

	for (i=0;i<dim;i++)
	{
		for (j=0;j<dim;j++)
		{
			printf("[i] [j] (seperate by hitting enter) = ");
			scanf("%5d",&b[i][j]);
		}
		
		printf("\n");
	}

	//print a
	printf("Matrix a:\n");
	printMatrix(a, dim);

	//print b
	printf("Matrix b:\n");
	printMatrix(b, dim);

	//compute and print sum.
	printf("----------------------------------");

	printf("\nAddition a + b:\n\n");

	MatrixAddition(a,b,result,dim);

	printf("resulting matrix\n\n");

	printMatrix(result, dim);

	//compute and print difference between a and b meaning a - b
	printf("----------------------------------");

	printf("\nSubtraction a - b:\n\n");

	MatrixSubtraction(a,b,result,dim);

	printf("resulting matrix\n\n");

	printMatrix(result, dim);

		//compute and print difference between b and a meaning b - a
	printf("----------------------------------");

	printf("\nSubtraction b - a:\n\n");

	MatrixSubtraction(b,a,result,dim);

	printf("resulting matrix\n\n");

	printMatrix(result, dim);

	// multiplication for a * b.
	printf("----------------------------------");

	printf("\nMultiplication a * b:\n\n");
	MatrixMultiplication(a,b,result,dim);

	printf("resulting matrix\n\n");

	printMatrix(result,dim);

	// multiplication for b * a.
	printf("----------------------------------");

	printf("\nMultiplication b * a:\n\n");
	MatrixMultiplication(b,a,result,dim);

	printf("resulting matrix\n\n");

	printMatrix(result,dim);

	// Transpose Matrix a.
	printf("----------------------------------");

	printf("\nTransposing matrix a:");
	MatrixTranspose(a,result,dim);

	printf("resulting matrix\n\n");

	printMatrix(result,dim);

	// Transpose Matrix b.
	printf("----------------------------------");

	printf("\nTransposing matrix b:");
	MatrixTranspose(b,result,dim);

	printf("resulting matrix\n\n");

	printMatrix(result,dim);

	return 0;
}

void printMatrix(int arr[][6], int DIM)
{
	int i, j;

	for (i=0;i<DIM;i++)
	{
		for (j=0;j<DIM;j++)
			printf("%d ",arr[i][j]);

		printf("\n");
	}
	printf("\n");
}

void MatrixAddition(int A[][6], int B[][6], int sum[][6],int DIM)
{
	int i, j;


	for (i=0;i<DIM;i++)
	{
		for (j=0;j<DIM;j++)
		{
			sum[i][j]=A[i][j]+B[i][j];
			printf("%d + %d = %d",A[i][j],B[i][j],sum[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	
}

void MatrixSubtraction(int A[][6], int B[][6], int dif[][6],int DIM)
{
	int i, j;


	for (i=0;i<DIM;i++)
	{
		for (j=0;j<DIM;j++)
		{
			dif[i][j]=A[i][j]-B[i][j];
			printf("%d - %d = %d",A[i][j],B[i][j],dif[i][j]);
			printf("\n");
		}
		printf("\n");
	}
}

void MatrixMultiplication(int A[][6], int B[][6], int result[][6],int DIM)
{
	int i, j, k, sumtemp=0;

	for (i=0;i<DIM;i++)
	{
		for (j=0;j<DIM;j++)
		{
			for (k=0;k<DIM;k++)
			{
			sumtemp +=  (A[i][k] * B[k][j]);
			}
			result[i][j]=sumtemp;
			sumtemp=0;			
		}
	
	}
}

void MatrixTranspose(int A[][6], int result[][6], int DIM)
{

	int i, j;
	int temp = 0;

	for (i=0;i<DIM;i++)
	{
		for (j=0;j<DIM;j++)
		{
			result[i][j]=A[j][i];
		}

		printf("\n");
	}
	printf("\n");
}