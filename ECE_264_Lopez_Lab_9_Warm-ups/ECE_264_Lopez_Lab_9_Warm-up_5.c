//ECE 264
//Lab 9
//Warm-up 2
//Emilio Lopez
//10/18/2013

#include<stdio.h>

int main()
{
	short T[3] = {6, 17, 3};
	short *sp = T;
	short x;
	x = *(sp+3);
	printf("T[3] = %hd\n", T[3]);
	printf("x = %hd\n",x);





	return 0;
}