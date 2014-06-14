#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

int NumOfBits(int a);
int isNarcissus( char *str);

struct node
{
	int a;                      //data part
	struct node*next;  //pointer part
};

int main()
{
	struct node *head,*tail;
	int i,result;
	head = (struct node*) malloc(sizeof(struct node));


	tail = head;
	head ->a = 100;
	head=tail;
	for(i = 0;i<10;i++)//creates the list of nodes
	{
		tail -> next =(struct node*) malloc(sizeof(struct node));
		tail = tail -> next;
		tail -> next =NULL;
		tail ->a = i;
	}

	
	result = CountNodes(head);

	printf("result = %d",result);
	return 0;
}
int NumOfBits(int a)
{
	int temp = a;
	int count = 0;
	while (temp != 0)
	{
		temp=temp>>1;//shifts the bits to the right by one
		count++;//it increments the number of bits by one every iteration
	}
	return count;
}

int isNarcissus( char *str)
{
	int i =0;
	int j = strlen(str)/2;//cuts the string in half
	int check = j;
	int check2 = strlen(str)%2;//to see if there are even or odd number of characters
	int count = 0;
	printf("j = %d\n",j);
	while(*(str+j)!=0)
	{
		if(*(str+i) == *(str+j))
		{
			printf("*(str+i) = %c\t*(str+j) = %c\n",*(str+i),*(str+j));
			i++;
			j++;
			count++;
		}
		else 
			break;
	}
	printf("count = %d\tcheck = %d",count,check);
	if (count==check&&check2!=1)
		return 1;

	else if(count!=check||check2==1)
		return 0;
}

int my_strcmp(char *str1, char *str2)
{
	int i = 0;
	int num1 = 0,num2=0;
	while(*(str1+i)!=NULL)
	{
		num1 += *(str1+i);
		num2 += *(str2+i);
		i++;
	}
	if(num1>num2)
		return 1;

	else if(num2 == num1)
		return 0;

	else if (num2>num1)
		return -1;


}

int CountNodes(struct node* head)
{	
	struct node* temp;
	int count=0;

	temp = head;
		
	while(temp ->next != NULL)
	{
		temp = temp -> next;
		count++;
	}
	
	return count;
}