//ECE 264
//Lab # 7
//Problem # 1
//Emilio Lopez
//stuff

#include <stdio.h>
#include <ctype.h>

void displayArr(int arr[], int size);
void displayArrdig(int arr[], int size);
void displayArrRev(int arr[], int size);
void bubbleSort(int arr[], int size);

int main()
{
	int arr[50];
	int countDigits[10]={0,0,0,0,0,0,0,0,0,0};
	int i;
	int status=1;
	int size = -1;

	while(status==1)
	{
		for (i=0;i<50;i++)
		{
			printf("Please enter a number for the array, (press q to quit): ");
			status = scanf_s("%d",&arr[i]);
			
			if (arr[i]>=0 && arr[i]<=9)
			{
				countDigits[arr[i]]++;
			}

			else if (status != 1)
				break;

			size++;
		}
	}

	//normal array
	bubbleSort(arr, size);
	displayArr(arr,size);
	displayArrRev(arr, size);

	//count digit array
	
	displayArrdig(countDigits, 9);



	return 0;
}

void bubbleSort(int arr[],int size)
{
	int i, j;
	int temp;

	for(i = 0; i < size-1; i++)// size - 1 iterations
	{
		for(j = 0;j <= size-1-i;j++) //size - 1 -i
		{
			if(arr[j] > arr[j+1])
			{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			}
		}
	}
}

void displayArr(int arr[], int size)
{
		
	int i;
	int j=0;

	printf("\nArray in normal order:\n");
	for (i=0;i<=size;i++)
	{
		
		if (j!=0)
		{
			if (j%5==0)
			{
			printf("\n");
			printf("%d ",arr[i]);
			}
		
			else
				printf("%d ",arr[i]);
		}
		else
			printf("%d ",arr[i]);
		j++;
	}
}

void displayArrdig(int countDigits[], int size)
{
		
	int i;
	printf("\nList of digits (0-9) from greatest to least:\n");
	bubbleSort(countDigits,9);
	for (i=9;i>=0;i--)
	{
			printf("%d was entered %d times.\n",i,countDigits[i]);
	}
}

void displayArrRev(int arr[], int size)
{
	int i;
	int j = 0;
		printf("\nArray in reverse order:\n");
	for (i=size;i>=0;i--)
	{
		if (j!=0)
		{
			if (j%5==0)
			{
			printf("\n");
			printf("%d ",arr[i]);
			}
		
			else
				printf("%d ",arr[i]);
		}
		else
			printf("%d ",arr[i]);


		j++;

	}

	
}