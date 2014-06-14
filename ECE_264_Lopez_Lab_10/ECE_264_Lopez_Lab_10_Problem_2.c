//ECE 264
//Lab 10
//Problem 2
//Emilio Lopez
//Description:

/*The purpose of Problem 2 was to read in characters into an array
of characters, display a certain number of elements per line,
to display the array from the kth element, and lastly to show how
many; alphabetical characters, digits, whitespaces, and other
characters from the entire character array.*/ 

#include<stdio.h>

void displayArrBy4(char *arr, unsigned short size, unsigned short length, unsigned short startingpoint);
void constitueArr(char *arr, unsigned short size, unsigned short 
				  *numOfAlpha, unsigned short *numOfDigit, unsigned short 
				  *numOfSpace, unsigned short *numOfRest);

int main()
{
	char ch[81];
	char temp[81]={'A'};//temporary array
	char *ptr = NULL;
	int i = 0;
	unsigned short len;//length of the array entered
	unsigned short Alpha=0, Digit=0, Space=0, Rest=0;//initializing type of characters
	unsigned short *ALPHA = &Alpha, *DIGIT = &Digit, *SPACE = &Space, *REST = &Rest; 
	unsigned short size = -1;//initializing the size
	unsigned short k=0;//starting point of where to print the array.
	int check = 0;//initialize check
	while (check != '#')
	{
		size++;
		printf("Please enter a SINGLE character\n(enter # to stop): ch[%d] = ",i);
		ptr = fgets(temp,81,stdin);//have to use fgets inorder to read white spaces

		ch[i] = *ptr;//the i-th element gets what ever the value of the pointer is
		check = ch[i];//checking whether # has been entered or not
		
		i++;
		
		printf("\n");
	}

	printf("Please enter a value to display how many elements of the array per line:\nlen = ");
	scanf(" %hd",&len);
	

		while (len < 1 || len > 10)
	{
		
		printf("Not within range. Please reenter a value for len: ");
		scanf(" %hd",&len);
		
		size ++;
		printf("\n");
	}

		
		displayArrBy4(ch, size, len, k);

		printf("\n");

		printf("Please enter a value to display where to start in the array:\nk = ");
		scanf(" %hd",&k);

		displayArrBy4(ch, size, len, k);
		constitueArr(ch, size, ALPHA, DIGIT, SPACE, REST);

		printf("\n\nNumber of alphabetical characters entered: %hu\n",Alpha);
		printf("Number of digits entered: %hu\n",Digit);
		printf("Number of whitespaces entered: %hu\n",Space);
		printf("Number of other characters entered: %hu\n",Rest);

	return 0;
}


void displayArrBy4(char *arr, unsigned short size, unsigned short length, unsigned short startingpoint)
{
	unsigned short i,j=startingpoint;

	for(i=0; i<(size-startingpoint);i++)
	{
		if ((i%length == 0))//checking to see when to print a new line based upon k.
			printf("\n");

		printf("ch[%d] = %c\t",j, *(arr+j));
		j++;
	}
}

void constitueArr(char *arr, unsigned short size, unsigned short 
				  *numOfAlpha, unsigned short *numOfDigit, unsigned short 
				  *numOfSpace, unsigned short *numOfRest)
{
	int i;


		for(i=0; i<size;i++)
	{
		// the ++ operator does not work porperly in this demo.
		if ((*(arr+i) >=65 && *(arr+i) <= 90) || ((*(arr+i) >=97 && *(arr+i) <= 122)))//counting letters
			{*numOfAlpha+=1;}

		else if (*(arr+i) >=48 && *(arr+i) <= 57)//counting digits
			{*numOfDigit+=1;}

		else if (*(arr+i) == 32 || *(arr+i) == 10 || *(arr+i) == 9)//counting spaces
			{*numOfSpace+=1;}

		else//counting the rest
			{*numOfRest+=1;}	
	}
}