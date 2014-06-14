//ECE 264
//Lab 11
//Problem 2
//Emilio Lopez
//Description:

		/*The purpose of this lab was to type in a string, then type
		a second string that you want to take out of the first string*/

#include <stdio.h>
#include <string.h>

void str_remove(char *str1, char *str2, int SIZE1, int SIZE2);

int main(void)
{
	char list1[500], list2[20];
	char *ptr1 = NULL;
	char *ptr2 = NULL;
	int result;
	int i = 0, size1 = -1, size2 = -1;

	printf("Please type in the first string:\n");
	ptr1 = fgets(list1,100,stdin);
		while (*(ptr1 + i) != 0)//finds the size of the first array
		{
			i++;
			size1++;
		}
	
	printf("\nPlease type what you would like to remove:\n");
	ptr2 = fgets(list2,100,stdin);
	i=0;
		while (*(ptr2 + i) != 0)//finds the size of the second array
		{
			i++;
			size2+=1;
		}

	str_remove(ptr1, ptr2, size1, size2);

	printf("\nThe new string with the words taken out is:\n\n");

	for(i = 0;i<size1;i++)
	{
		printf("%c",*(ptr1 + i));
	}

	printf("\n\n");
	
	return 0;
}

void str_remove(char *str1, char *str2, int SIZE1, int SIZE2)
{
	int i = 0, j = 0;
	int k;

	for (i = 0; i<SIZE1;i++)
	{
		if (*(str1 + i) == *(str2 + j) && *(str1 + i+SIZE2-1) == *(str2 + j+SIZE2-1))//ensures that the correct string is taken out
				{ 	 
					k = i;
					for(k=0;k<SIZE2;k++)
							*(str1 + i + k) = ' ';//str1 + i finds where in the first string where the string you would like to delete
												 // and the + k is to remove SIZE2 (size of str2) number of elements and make it a space
					i = k;
				}					 
	}
}
