//ECE 264
//Lab 1
//Problem 1
//Emilio Lopez
#include <stdio.h> 
int main()
{
	float n,o, mp, ir, dp, pol; //initializing arguments
	float TX= 0.07;


	 printf("\t Welcome! This program is designed as a tool to help you ");
	 printf("calculate \n\t     the car payments for a year based on several variables. \n\n");

	 printf("Please enter the trade-in value for your previous car: $");
	 scanf("%f", &o);

	 printf("\nPlease enter the the value of the new car: $");
	 scanf("%f", &n);

	 printf("\nPlease enter the percentage of your down payment: ");
	 scanf("%f", &dp);

	 dp = n*dp/100; //the actual total of the downpayment in dollars, not percentage
	 pol = (n-o-dp)/n;

	 ir= 1.03; //interest rate of 3% the eqation is confusing and I am not sure still what you want
	 mp= (n-o-dp)*ir*(1+TX)/12; //monthly payment for a year

	 printf("\n\tThe monthly payment for one year is: $%f", mp);
	 printf("\n\n");

	 return (0);
}
