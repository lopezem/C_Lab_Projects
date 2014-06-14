//ECE 264
//Lab 11
//Problem 1
//Emilio Lopez
//Description:

		/*The purpose of this program is to read in two strings and determine wheter the second is;
		a substring, prefix, postfix, or has all the same characters as the first string.*/

#include <stdio.h>
#include <string.h>

int isSubString(char *str1, char *str2, int SIZE);
int isPrefix(char *str1, char *str2, int SIZE1);
int isPostFix(char *str1, char *str2, int SIZE1);
int isInString(char *str1, char *str2, int SIZE1, int SIZE2);

int main(void)
{
	char string1[500], string2[500];
	char *ptr1 = NULL;
	char *ptr2 = NULL;
	int result;
	int i = 0, size1 = -1, size2 = -1;//size is the size of the first and second substring
	printf("Please type in the first string:\n");
	ptr1 = fgets(string1,100,stdin);
		while (*(ptr1 + i) != 0)//finds the size of the first array
		{
			i++;
			size1++;
		}
	
	printf("Please type in the second string:\n");
	ptr2 = fgets(string2,100,stdin);
	i=0;
		while (*(ptr2 + i) != 0)//finds the size of the second array
		{
			i++;
			size2+=1;
		}

	//printf("ptr1 = %sptr2 = %s",ptr1,ptr2);


	result = isSubString(ptr1, ptr2, size1);

	if (result == 1)
		printf("\nThe second string is a substring of the first string\n\n");
	else if (result == 0)
		printf("The second string is a NOT substring of the first string\n\n");
		/*not a substring*/

	result = isPrefix(ptr1, ptr2, size1);

	if (result == 1)
		printf("The second string is a prefix of the first string\n\n");
	else if (result == 0)
		printf("The second string is NOT a prefix of the first string\n\n");

	result = isPostFix(ptr1, ptr2, size1);

	if (result == 1)
		printf("The second string is a postfix of the first string\n\n");
	else
		printf("The second string NOT is a postfix of the first string\n\n");

	result =isInString(ptr1, ptr2, size1, size2);

	if (result == 1)
		printf("The second string is the same as the first string.\n\n");
	else if (result == 0)
		printf("The second string is NOT the same as the first string.\n\n");

	return 0;
}

int isSubString(char *str1, char *str2, int SIZE1)
{
	int i = 0, j = 0;
	int k = 0;

	int check = 1;
	for (i = 0; i<SIZE1;i++)
	{
		//printf("str1 of i=%d = %c\tstr2 of j=%d = %c\n",i,*(str1 + i),j,*(str2 + j));
		if (*(str1 + i) == *(str2 + j) && check != 0)
				{ 	 
					
					 j++;
					 k++;
					 //printf("same\n");
				}					 

		if (k>2)
			check = 0;
	}
	//printf("k = %d (number of sames)",k);
	  if (k>=2)
		  return 1;

	  else if (k<2)
		  return 0;
	}

int isPrefix(char *str1, char *str2, int SIZE1)
{
	int i = 0;
	int k = 0;
	int check = 1;
	for (i = 0; i<SIZE1;i++)
	{
		if (*(str1 + i) == *(str2 + i) && check != 0)
			 k++;
					 
		if (k>3)
			check = 0;
	}
	//printf("k = %d (number of sames)",k);
	  if (k>=3)
		  return 1;

	  else if (k<3)
		  return 0;
	
}

int isPostFix(char *str1, char *str2, int SIZE1)
{
	int i = 0, j = 0;
	int k = 0;

	char temp;
	int check = 1;
	for (i = 0; i<SIZE1;i++)
	{
		if (*(str1 + i) == *(str2 + j) && check != 0 && *str1 != *str2)
				{ 	 
					 j++;
					 k++;
				}	 

			if (k>3)
				check = 0;
	}
	  if (k>=3)
		  return 1;

	  else if (k<3)
		  return 0;
}

int isInString(char *str1, char *str2, int SIZE1, int SIZE2)
{
	int i = 0, j = 0, k = 0;
	int max,min;
	int check;
		if (SIZE1<SIZE2)
		{
			max = SIZE2;
			min = SIZE1;
		}

		else
		{
			max=SIZE1;
			min = SIZE2;
		}
	check = 1;
	for (i = 0; i<500;i++)
	{
		
		if (*(str1 + k) == *(str2 + j) && check != 0)
		{
			
			//starts back over and starts checking every element again
			j++;
			//printf("NEW k = %d\tj = %d\n",k,j);
			//printf("k =	%c\tj = %c\n",*(str1+k),*(str2+j));
			*(str1 + k) = '#'; // this element has been checked and shouldn't be rechecked
			k=0;
		}
		else 
			k++;

		if (j == max)//means every element in the 2nd array is the same as the first
			check = 0;	



	}
	
	if (j == max)
	  return 1;

	else if (j != max)
		  return 0;

}
