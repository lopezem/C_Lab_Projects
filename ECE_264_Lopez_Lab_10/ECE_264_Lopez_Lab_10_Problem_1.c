//ECE 264
//Lab 10
//Problem 1
//Emilio Lopez
//Description:

		/*The purpose of Problem 1 was to find the avereage of two
		characters using; function pointers and scanf method, assign
		the average to each of the two characters, display their average
		and addresses before and after the function has been called*/

#include<stdio.h>

void balanceCh(char* ,char*);

int main()
{
	char a;

	char b;

	printf("Please enter a value for the a and b characters respectively: ");
	scanf("%c %c",&a,&b);

	printf("\nYou chose for the first character a: %c",a);
	printf("\nYou chose for the second character b: %c\n\n",b);

	printf("\nThe address for the first character a is: %d",&a);
	printf("\nThe address for the second character b is: %d\n\n",&b);

	balanceCh(&a, &b);

	printf("\nThe new value of the first character a: %c",a);
	printf("\nThe new value of the second character b: %c",b);

	printf("\n\nThe address for the first character a is: %d",&a);
	printf("\nThe address for the second character b is: %d\n\n",&b);



	return 0;
}


void balanceCh(char* ch1,char* ch2)
{
	int avgdec;//decimal value of the average
	char avgchar;//character value of the average

	avgdec = (*ch1 + *ch2) / 2;//acii values are integers so no decimal will be returned
							// i.e. a = 97 b = 98 (a+b)/2 = 97
	avgchar = avgdec;
	*ch1 = avgdec;
	*ch2 = avgdec;

	printf("The average in dec is: %d or the character %c.\n",avgdec,avgchar);
}