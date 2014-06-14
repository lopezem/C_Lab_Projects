//ECE 264
//Lab 14 warmups
//Emilio Lopez
// Description

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//								//Warm-up Exercise 1
//int main()
//{
//	FILE *infile;
//	float pi;
//
//	infile = fopen("value.txt", "r");
//	if(infile == NULL)
//	{
//		printf("Unable to open file\n");
//		exit(1);
//	}
//	fscanf(infile,"%f",&pi);
//	printf("pi = %f\n",pi);
//
//	return 0;
//}

//								//Warm-up Exercise 2
//int main()
//{
//	FILE *infile;
//	float f;
//	int i = 1;//line number
//
//	infile = fopen("value.txt", "r");
//	if(infile == NULL)
//	{
//		printf("Unable to open file\n");
//		exit(1);
//	}
//	while(fscanf(infile,"%f",&f)!=EOF)//	{
//		printf("Line %d: f = %f\n",i,f);
//		i++;
//	}
//	return 0;
//}

//								//Warm-up Exercise 3
//int main()
//{
//	FILE *outfile;
//	int number;
//
//	outfile = fopen("number.txt", "w");
//	if(outfile == NULL)
//	{
//		printf("Unable to open file\n");
//		exit(1);
//	}
//		printf("Please Enter a number to be stored into number.txt: number = ");
//		scanf("%d",&number);
//
//		fprintf(outfile,"%d",number);
//		fclose (outfile);
//	return 0;
//}

//								//Warm-up Exercise 4
//int main()
//{
//	FILE *infile, *outfile;
//	int n,i;
//	infile = fopen("value.txt", "r");
//	outfile = fopen("integers.txt", "w");
//	if(infile == NULL || outfile == NULL)
//	{
//		printf("Unable to open file\n");
//		exit(1);
//	}
//
//		fscanf(infile,"%d",&n);//get the integer from the infile
//
//		for(i=1;i<=n;i++)
//			fprintf(outfile,"%d ",i);//prints all the numbers from 1-n in integers.txt on a single line
//
//		fclose (outfile);
//		fclose (infile);
//		printf("File succesfully written\n");
//	return 0;
//}

//								//Warm-up Exercise 5
//
//int main()
//{
//	FILE *outfile;
//	int number;
//
//	outfile = fopen("number.txt", "w");
//	if(outfile ==NULL)
//	{
//		printf("Unable to open file\n");
//		exit(1);
//	}
//		printf("Please Enter a number to be stored into number.txt: number = ");
//		scanf("%d",&number);
//
//		fprintf(outfile,"%d",number);
//		fclose (outfile);
//	return 0;
//}

//								//Warm-up Exercise 6
//
//int main()
//{
//	
//	int lower_limit = 20, upper_limit = 50;
//	int result;
//	srand(time(NULL));
//	result = rand()%(upper_limit - lower_limit +1) + lower_limit;
//	printf("result = %d\n",result);
//		
//	return 0;
//}

//								//Warm-up Exercise 7
//
//int main()
//{
//	
//	int lower_limit1 = 'a', upper_limit1 = 'z';
//	int lower_limit2 = 'A', upper_limit2 = 'Z';
//	int result,i,coin;
//	srand(time(NULL));
//	printf("\t\t**A random character [a,z]**\n");
//	for (i = 0; i<26;i++)
//	{
//		result = rand()%(upper_limit1 - lower_limit1 +1) + lower_limit1;
//		printf(" %c\n",result);
//	}
//
//	printf("\n\t\t**A random character [a,z]U[A,Z]**\n");
//	
//	for(i = 0; i<26;i++)
//	{
//		coin = rand()%2;//generates either a 1 or a 0
//
//		if (coin == 0)//0 is for lower case letters
//		{
//			result = rand()%(upper_limit1 - lower_limit1 +1) + lower_limit1;
//			printf(" %c\n",result);
//		}
//
//		if (coin == 1)//1 is for upper case letters
//		{
//			result = rand()%(upper_limit2 - lower_limit2 +1) + lower_limit2;
//			printf(" %c\n",result);
//		}
//	}
//
//	return 0;
//}

//								//Warm-up Exercise 8
//
//int main()
//{
//	
//	int lower_limit = 20, upper_limit = 50;
//	int i;
//	float result,max=0,min=0;
//	srand(time(NULL));
//	for (i= 0;i<10;i++)
//	{
//		result = (rand()%RAND_MAX + 1)/((double) RAND_MAX) + lower_limit + rand()%(upper_limit - lower_limit);
//		printf("result = %f\n",result);
//		
//	}
//
//	return 0;
//}

								//Warm-up Exercise 9
int main()
{
	unsigned short x = 10;
	unsigned short y = 12;

	

	return 0;
	}