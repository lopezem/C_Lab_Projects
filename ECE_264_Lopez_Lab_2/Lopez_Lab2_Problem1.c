//ECE264
//Lab 2
//Problem 1
//Emilio Lopez
//This program is a billing software for customers that are on the "Pay as You Go"
//plan on AT&T

#include<stdio.h>

#define tax 0.0825

int main()
{
	const float phoneprice=200, dcallsprice=0.19, icallsprice=1.00, dataprice=1.00, txtprice=0.20, voiceprice=0.25;//unit prices
	int  Phones, Dcalls, Icalls, Data, TXT, Voice; //quantity column
	float TAX;
	float phonetotal, dtotal,itotal,datatotal,txttotal,voicetotal;//total column
	float total, subtotal;

	printf("Please enter the number of new prepaid phones ordered: ");
	 scanf("%d", &Phones);
	  phonetotal=phoneprice*Phones;

	printf("Please enter the number of minutes used for domestic calls: ");
	 scanf("%d", &Dcalls);
	  dtotal=dcallsprice*Dcalls;
	
	printf("Please enter the number of minutes used for international calls: ");
	 scanf("%d", &Icalls);
	  itotal=icallsprice*Icalls;

	printf("Please enter how much data was used (in MB): ");
	 scanf("%d", &Data);	
	  datatotal=dataprice*Data;

	printf("Please enter the number of text messages sent and recieved: ");
	 scanf("%d", &TXT);
	  txttotal=txtprice*TXT;
	
	printf("Please enter the number of minutes used for voice mail: ");
	 scanf("%d", &Voice);
	  voicetotal=voiceprice*Voice;

	subtotal= (phonetotal + dtotal + itotal + datatotal + txttotal + voicetotal) + 5 - 10;
	TAX = tax*subtotal;//total amount of tax
	total = subtotal + TAX;// subtotal with tax

	printf("\n\nQTY               DESCRIPTION               UNIT PRICE              TOTAL\n");

	printf("----             -------------             ------------            --------");

	printf("\n%03d             New Prepaid Phone             %.2f               %.2f",Phones,phoneprice,phonetotal);
	printf("\n%03d             Domestic calls (minutes)        %.2f               %.2f",Dcalls,dcallsprice,dtotal);
	printf("\n%03d             International                   %.2f               %.2f",Icalls,icallsprice,itotal);
	printf("\n%03d             Data (MB)                       %.2f               %.2f",Data,dataprice,datatotal);
	printf("\n%03d             Text Messages                   %.2f               %.2f",TXT,txtprice,txttotal);
	printf("\n%03d             Voice Messages                  %.2f               %.2f",Voice,voiceprice,voicetotal);

	printf("\n                                                                   ------------");
	printf("\n                                             LABORDAY PROMOTION        - $5.00");
	printf("\n                                                 ACTIVATION FEE       + $10.00");
	printf("\n                                                       SUBTOTAL       + $%.2f",subtotal);
	printf("\n                                                            TAX       + $%.2f",TAX);
	printf("\n                                                                   ------------");
	printf("\n\n                                                          TOTAL        $%.2f\n",total);

	return 0;
}