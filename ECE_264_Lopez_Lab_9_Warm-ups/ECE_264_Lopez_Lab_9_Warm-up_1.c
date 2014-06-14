//ECE 264
//Lab 9
//Warm-up 1
//Emilio Lopez
//10/18/2013

#include<stdio.h>

int main()
{
	float num1 = 7.3;
	float num2 = 0;
	float *fPtr;
	fPtr=&num1;

	printf("1.) The initial value of fPtr is: %f\n\n",*fPtr);
	num2=*fPtr;
	*fPtr = (2+num2);

	printf("2.) The new value of fPtr is: %f\n\n",*fPtr);
	printf("3.) The value of num1 is: %f\n\n",num1);
	printf("4.) The value of num2 is: %f\n\n",num2);
	printf("5.) The address of num 1 is: %p\n\n",&num1);
	printf("6.) The address stored in fPtr is: %f\n\n",fPtr);//should always be NULL
	printf("7.) The address of fPtr is: %p\n\n",&fPtr);

	fPtr = &num2;
	(*fPtr)++;//like num2++

	printf("8.) The value of num2 is now: %f\n\n",num2);

	return 0;
}