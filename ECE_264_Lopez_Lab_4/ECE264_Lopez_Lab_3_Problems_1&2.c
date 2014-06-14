////ECE 264
////Lab #: 4
////Problem #: 1 & 2 (all in one)
////Emilio Lopez
//
////Description:
////The purpose of this lab was a expansion of the previous lab. This program has both problems 1 and 2 together.
////This program is a game of rock, paper, scissors, lizard, spock with functions, a do while loop, and a list of options.
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////Initialization of the functions.
//
//void printrock(void);
//void printpaper(void);
//void printscissors(void);
//void printlizard(void);
//void printspock(void);
//void printgesturelist(void);
//void printrules(void);
//
////begin main function
//
//void main(void)
//{
//	int iSecret;//Computer's Gesutre
//	char wpn;//Human's gesture	
//	int cmp=0;//Computer's total score
//	int hmn=0;//Human's total score
//
//	srand (time(NULL));
//	printf("\t  Welcome! Let's play ''Rock-Paper-Sissors-Lizard-Spock!''\n\n");
//	printf("The following list shows each gesture's power: \n\n");
//	printf("Scissors cuts Paper, \nPaper covers Rock, \nRock Crushes Lizard, \nLizard poisons Spock,");
//	printf("\nSpock smashes Scissors, \nScissors decapitats Lizard, \nLizard eats Paper,");
//	printf("\nPaper disproves Spock, \nSpock vaporizes Rock, \nand as it always has, Rock Crushes Scissors.\n\n");
//	printgesturelist();
//	iSecret = (rand() % 5) + 1;
//
//do 
//{	
//
//	scanf("%c%*c", &wpn);
//	printf("\033[2J");//this clears the entire screen by using the ansicon digit, for problem # 2.
//
//	//Since wpn is a character, it must add 48 to itself inorder to get the numeric value
//	if ((wpn<1+48 || wpn>5+48) && wpn != 'q' && wpn != 'Q'&& wpn != 'l' && wpn != 'L'&& wpn != 'r' && wpn != 'R')
//	{
//		printf("Invalid gesture. Please enter a new number from 1-5.\n\n");
//		printgesturelist();
//
//	}
//
//	else if (wpn>=1+48 && wpn<=5+48)
//	{
//		iSecret = (rand() % 5) + 1;
//
//		switch(iSecret)
//		{
//
//		   case 1 : //Computer's Rock
//			   printf("Comptuer's gesture:\n");
//			   printrock();
//
//			   if (wpn == 1+48)
//			   {
//				   printf("Your gesture:\n");
//					printrock();
//					printf("The Computer's Rock ties your Rock.\n"); 
//			   }
//			   else if (wpn == 2+48)
//			   {
//				   printf("Your gesture:\n");
//					printpaper();
//					printf("Your Paper beats *covers* the Computer's Rock.\n");
//					hmn++;
//			   }
//			   else if (wpn == 3+48)
//			   {
//					printf("Your gesture:\n");
//					printscissors();
//					printf("The Computer's Rock beats *crushes* your Scissors.\n");
//					cmp++;
//			   }
//			   else if (wpn == 4+48)
//			   {
//					printf("Your gesture:\n");
//					printlizard();
//					printf("The Computer's Rock beats *crushes* your Lizard.\n");
//					cmp++;
//			   }
//			   else if (wpn == 5+48)
//			   {
//					printf("Your gesture:\n");
//					printspock();
//					printf("Your Spock beats *vaporizes* the Computer's Rock.\n");
//					hmn++;
//			   }
//			   break;
//		   case 2 : //Computer's Paper
//			   printf("Comptuer's gesture:\n");
//			   printpaper();
//	   
//	   			   if (wpn == 1+48)
//				   {
//					printf("Your gesture:\n");
//					printrock();
//					printf("The Computer's paper beats *covers* your Rock.\n");
//					cmp++;
//				   }
//			   else if (wpn == 2+48)
//				{
//					printf("Your gesture:\n");
//					printpaper();
//					printf("Your Paper ties the Computer's Paper.\n");
//				}
//			   
//			   else if (wpn == 3+48)
//			   {
//					printf("Your gesture:\n");
//					printscissors();
//					printf("Your Scissors beats *cuts* the Computer's Paper.\n");
//					hmn++;
//			   }
//			   else if (wpn == 4+48)
//			   {
//					printf("Your gesture:\n");
//					printlizard();
//					printf("Your Lizard beats *eats* the Computer's Paper.\n");
//					hmn++;
//			   }
//			   else if (wpn == 5+48)
//			   {
//		   			printf("Your gesture:\n");
//					printspock();
//					printf("The Computer's paper beats *disproves* your Spock.\n");
//					cmp++;
//			   }
//			   break;
//
//		   case 3 : //Computer's Scissors
//			   printf("Comptuer's gesture:\n");
//			   printscissors();
//			   if (wpn == 1+48)
//			   {
//		   			printf("Your gesture:\n");
//					printrock();
//					printf("Your Rock beats *Crushes* the Computer's Scissors.\n");
//					hmn++;
//			   }
//			   else if (wpn == 2+48)
//			   {
//					printf("Your gesture:\n");
//					printpaper();
//					printf("The Computer's Scissors beats *cuts* your Paper.\n");
//					cmp++;
//			   }
//			   else if (wpn == 3+48)
//			   {
//					printf("Your gesture:\n");
//					printscissors();
//					printf("Your Scissors ties the Computer's Scissors.\n");
//			   }
//			   else if (wpn == 4+48)
//			   {
//					printf("Your gesture:\n");
//					printlizard();
//					printf("The Computer's Scissors beats *decapitates* your Lizard.\n");
//					cmp++;
//			   }
//			   else if (wpn == 5+48)
//			   {
//		   			printf("Your gesture:\n");
//					printspock();
//					printf("Your Spock beats *smashes* the Computer's Scissors.\n");
//					hmn++;
//			   }
//			   break;
//		   case 4 : //Computer's Lizard
//			   printf("Comptuer's gesture:\n");
//			   printlizard();	   
//
//			   if (wpn == 1+48)
//			   {
//		   			printf("Your gesture:\n");
//					printrock();
//					printf("Your Rock beats *crushes* the Computer's Lizard.\n");
//					hmn++;
//			   }
//			   else if (wpn == 2+48)
//			   {
//		   			printf("Your gesture:\n\n");
//					printpaper();
//					printf("The Computer's Lizard beats *eats* your Paper.\n");
//					cmp++;
//			   }
//			   else if (wpn == 3+48)
//			   {
//		   			printf("Your gesture:\n");
//					printscissors();
//					printf("Your Scissors beats *decapitates* the Computer's Lizard.\n");
//					hmn++;
//			   }
//			   else if (wpn == 4+48)
//			   {
//		   			printf("Your gesture:\n");
//					printlizard();
//					printf("Your Lizard ties the Computer's Lizard.\n");
//			   }
//			   else if (wpn == 5+48)
//			   {
//		   			printf("Your gesture:\n");
//					printspock();
//					printf("The Computer's Lizard beats *poisons* your Spock.\n");
//					cmp++;
//			   }
//					break;
//		   case 5 : //Computer's Spock
//			   printf("Comptuer's gesture:\n");
//			   printspock();
//			   if (wpn == 1+48)
//			   {
//		   			printf("Your gesture:\n");
//					printrock();
//					printf("Computer's Spock beats *vaporizes* your Rock.\n");
//					cmp++;
//			   }
//			   else if (wpn == 2+48)
//			   {
//		   			printf("Your gesture:\n");
//					printpaper();
//					printf("Your Paper beats *disproves* the Computer's Spock.\n");
//					hmn++;
//			   }
//			   else if (wpn == 3+48)
//			   {
//		   			printf("Your gesture:\n");
//					printscissors();
//					printf("The Computer's Spock beats *crushes* your Scissors.\n");
//					cmp++;
//			   }
//			   else if (wpn == 4+48)
//			   {
//		   			printf("Your gesture:\n");
//					printlizard();
//					printf("Your Lizard beats *poisens* the Computer's Spock.\n");
//					hmn++;
//			   }
//			   else if (wpn == 5+48)
//			   {
//		   			printf("Your gesture:\n");
//					printspock();
//					printf("Your Spock ties the Computer's Spock.\n");
//			   }
//			   break;  
//
//		}//end switch
//
//     	printf("\n(To see the gesture list again, enter L.)\n(To see the rules again, enter R.)\n");
//		printf("(To quit and see the final score, enter Q.)");
//		printf("\n\nYour gesture choice 1-5: ");
//
//	}//end else if
// 
//
//   else if (wpn == 'l' || wpn == 'L')
//	   printgesturelist();
//   else if (wpn == 'r' || wpn == 'R')
//	   printrules();
//   else if (wpn == 'q' || wpn == 'Q')//this is the non digit part of problem # 1, I decided Q would be a good non digit
//									 //choice instead of having an arbitrary non digit.
//	   break;
//
// } while ((wpn>=5 || wpn<=5));//end do-while
//
//	printf("Your total score is: %d",hmn);
//	printf("\n\nThe Computer's total score is: %d",cmp);
//
//	if (hmn>cmp)
//		printf("\n\n\t\t\t\t  You win!!!!!\n\n");
//
//	else if (cmp>hmn)
//		printf("\n\n\t\t\t\t  You Lose!!!!!\n\n");
//
//	else
//		printf("\n\n\t\t\t\t  It's a tie!!\n\n");
//}//end main
//
////function definitions
//
//void printrock(void)
//{
//	int i,j,k,l;
//	printf("Rock:\n");
//	   for (i=0;i<5;i++)
//	   { 
//		   for (j=0;j<12;j++)
//			   printf("*");
//		   printf("\n");
//	   }
//	   printf("\n");
//}
//
//void printpaper(void)
//{
//	int i,j,k,l;
//	printf("Paper:\n");
//	  for (i=0;i<5;i++)
//	   { 
//		   
//		   for (k=0;k<i;k++)
//			   printf(" ");
//		   
//		   for (j=0;j<12;j++)
//			   printf("*");
//		   printf("\n");
//	   }
//	  printf("\n");
//}
//
//void printscissors(void)
//{
//	int i,j,k,l;
//
//	    printf("Scisosrs:\n");
//	  for (i=1;i<=6;i++)
//	  {
//		  for (j=0;j<i;j++)
//			  printf("*");
//		  for (k=0;k<12-2*i;k++)
//			  printf(" ");
//
//			for (l=0;l<i;l++)
//				  printf("*");		  
//		  printf("\n");
//	  }
//	  printf("\n");
//	
//}
//
//void printlizard(void)
//{
//	int i,j,k,l;
//	printf("Lizard:\n");
//	  for (j=0;j<12;j++)
//			   printf("*");
//	  printf("\n");
//		for (i=0;i<4;i++)
//	   { 
//		   printf("*");
//		   for (k=0;k<8-2*i;k++)
//			   printf(" ");
//		   printf("*");
//		   
//		   printf("\n");
//	   }
//		printf("*");
//		printf("\n");
//}
//
//void printspock(void)
//{
//
//int i,j,k,l;
//
//	    printf("Spock:\n");
//	  for (i=1;i<=6;i++)
//	  {
//		  for (j=0;j<i;j++)
//			  printf("%d",i);
//		  for (k=0;k<12-2*i;k++)
//			  printf(" ");
//
//			for (l=0;l<i;l++)
//				  printf("%d",i);		  
//		  printf("\n");
//	  }
//	  printf("\n");	
//}
//
//void printgesturelist(void)
//{
//	printf("1 = Rock\n");
//	printf("2 = Paper\n");
//	printf("3 = Scissors\n");
//	printf("4 = Lizzard\n");
//	printf("5 = Spock");
//	printf("\n\nYour gesture choice 1-5: ");
//}
//
//void printrules(void)
//{
//	printf("The following list shows each gesture's power: \n\n");
//	printf("Scissors cuts Paper, \nPaper covers Rock, \nRock Crushes Lizard, \nLizard poisons Spock,");
//	printf("\nSpock smashes Scissors, \nScissors decapitats Lizard, \nLizard eats Paper,");
//	printf("\nPaper disproves Spock, \nSpock vaporizes Rock, \nand as it always has, Rock Crushes Scissors.");
//	printf("\n\nYour gesture choice 1-5: ");
//
//}