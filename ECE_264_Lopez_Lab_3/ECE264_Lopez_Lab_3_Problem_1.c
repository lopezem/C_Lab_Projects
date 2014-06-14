#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int iSecret;
	int wpn;
	int hmn=0;
	int cmp=0;
	int i;
	int rounds;
	srand (time(NULL));

	iSecret = (rand() % 5) + 1;

	printf("\t  Welcome! Let's play ''Rock-Paper-Sissors-Lizard-Spock!''\n\n");
	printf("The following list shows each weapon's power: \n\n");
	printf("Scissors cuts Paper, \nPaper covers Rock, \nRock Crushes Lizard, \nLizard poisons Spock,");
	printf("\nSpock smashes Scissors, \nScissors decapitats Lizard, \nLizard eats Paper,");
	printf("\nPaper disproves Spock, \nSpock vaporizes Rock, \nand as it always has, Rock Crushes Scissors.\n\n");
	printf("Please enter the number of rounds you would like to play: ");
	scanf("%d", &rounds);
	printf("Please input a number from 1-5 indicating which weapon you would like to choose:\n\n");
	printf("1 = Rock\n");
	printf("2 = Paper\n");
	printf("3 = Scissors\n");
	printf("4 = Lizzard\n");
	printf("5 = Spock");

for (i=0;i<rounds;i++)
{	
		  printf("\n\nYour weapon #: ");
	scanf("%d", &wpn); 
	printf("\nComputer's weapon number: %d\n", iSecret);
	
	 

	switch(iSecret)
   {

   case 1 : //Computer's Rock

	   if (wpn == 1)
			printf("The Computer's Rock ties your Rock.\n"); 

	   else if (wpn == 2)
	   {
			printf("Your Paper beats *covers* the Computer's Rock.\n");
			hmn++;
	   }
	   else if (wpn == 3)
	   {
			printf("The Computer's Rock beats *crushes* your Scissors.\n");
			cmp++;
	   }
	   else if (wpn == 4)
	   {
			printf("The Computer's Rock beats *crushes* your Lizzard.\n");
			cmp++;
	   }
	   else if (wpn == 5)
	   {
			printf("Your Spock beats *vaporizes* the Computer's Rock.\n");
			hmn++;
	   }
	   break;
   case 2 : //Computer's Paper

	   	   if (wpn == 1)
		   {
			printf("The Computer's paper beats *covers* your Rock.\n");
			cmp++;
		   }
	   else if (wpn == 2)
			printf("Your Paper ties the Computer's Paper.\n");
			   
	   else if (wpn == 3)
	   {
			printf("Your Scissors beats *cuts* the Computer's Paper.\n");
			hmn++;
	   }
	   else if (wpn == 4)
	   {
			printf("Your Lizard beats *eats* the Computer's Paper.\n");
			hmn++;
	   }
	   else if (wpn == 5)
	   {
			printf("The Computer's paper beats *disproves* your Spock.\n");
			cmp++;
	   }
	   break;
   case 3 : //Computer's Scissors
	   if (wpn == 1)
	   {
			printf("Your Rock beats *Crushes* the Computer's Scissors.\n");
			hmn++;
	   }
	   else if (wpn == 2)
	   {
			printf("The Computer's Scissors beats *cuts* your Paper.\n");
			cmp++;
	   }
	   else if (wpn == 3)
			printf("Your Scissors ties the Computer's Scissors.\n");
	   else if (wpn == 4)
	   {
			printf("The Computer's Scissors beats *decapitates* your lizard.\n");
			cmp++;
	   }
	   else if (wpn == 5)
	   {
			printf("Your Spock beats *smashes* the Computer's Scissors.\n");
			hmn++;
	   }
	   break;
   case 4 : //Computer's Lizzard
	   if (wpn == 1)
	   {
			printf("Your Rock beats *crushes* the Computer's Lizzard.\n");
			hmn++;
	   }
	   else if (wpn == 2)
	   {
			printf("The Computer's Lizzard beats *eats* your Paper..\n");
			cmp++;
	   }
	   else if (wpn == 3)
	   {
			printf("Your Scissors beats *decapitates* the Computer's Lizzard.\n");
			hmn++;
	   }
	   else if (wpn == 4)
			printf("Your Lizard ties the Computer's Lizzard.\n");
	   else if (wpn == 5)
	   {
			printf("The Computer's Lizzard beats *poisons* your Spock.\n");
			cmp++;
	   }
			break;
   case 5 : //Computer's Spock
	   if (wpn == 1)
	   {
			printf("Computer's Spock beats *vaporizes* your Rock.\n");
			cmp++;
	   }
	   else if (wpn == 2)
	   {
			printf("Your Paper beats *disproves* the Computer's Spock.\n");
			hmn++;
	   }
	   else if (wpn == 3)
	   {
			printf("The Computer's Spock beats *crushes* your Scissors.\n");
			cmp++;
	   }
	   else if (wpn == 4)
	   {
			printf("Your Lizard beats *poisens* the Computer's Spock.\n");
			hmn++;
	   }
	   else if (wpn == 5)
			printf("Your Spock ties the Computer's Spock.\n");
	   break;  

   }
}
		printf("\n\nYour total score is: %d",hmn);
		printf("\n\nThe computer's score is: %d",cmp);

		if (hmn>cmp)
			printf("\n\nYou win!!\n\n");

		else if (cmp>hmn)
			printf("\n\nYou Lose!!\n\n");

		else
			printf("\n\nIt's a tie!!\n\n");
	return(0);
}