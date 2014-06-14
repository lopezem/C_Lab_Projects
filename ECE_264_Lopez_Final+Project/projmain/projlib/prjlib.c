#include "../projmain/pr1.h"
#include "../projmain/prj.h"
#include <time.h>
#include <math.h>

struct block* genNewBlock()
{
	static int visit=0;
	static int clock=1;
	struct tm time;

	struct  block *list=NULL;
	struct  block *prev=NULL;
	struct  block *tmp=NULL;
	
	int shape;
	int rotate;
	if(visit==0)
	{
		_getsystime(&time);
		visit=1;
		//srand(dwStart);
		srand(time.tm_sec);
	}
	
	shape = rand() % SHAPE_MAX;

	rotate = rand() % 4;

	tmp = (struct block *)malloc(sizeof(struct block));
			
	if(tmp == NULL)
	{
		printf("Not enough memory!");
		exit(1);
	}
	tmp->columnNo = COLS / 2;
	tmp->rowNo = 1;
	tmp->nextBlock = NULL;
	tmp->rotate = rotate;
	tmp->shape = shape;
	
	return tmp;
}




/*
struct message* sortByTime(struct message*M)
{
	int i;
	int count=0;
	struct message* X;
	struct message* su;
	struct message* hold, *tmp;

	X=M;
	while(X!=NULL)
	{
		count++;
		X=X->nextmessage;
	}

	for(i=0;i<count-1;i++)
	{
		X=M;
		su=X->nextmessage;
		while(su!=NULL)
		{
			if(X->priority>su->priority)
			{
				if(X==M)
				{
					M=su;
					X->nextmessage=su->nextmessage;
					su->nextmessage=X;
					su=X->nextmessage;
				}
				else 
				{
					tmp=M;
					while(tmp->nextmessage!=X)
						tmp=tmp->nextmessage;
					tmp->nextmessage=su;
					X->nextmessage=su->nextmessage;
					su->nextmessage=X;
					su=X->nextmessage;
				}
			}
			else
			{
				X=X->nextmessage;
				su=su->nextmessage;
			}
		}
	}
	return M;


}

void displayNewNessages(struct message*M)
{
	int i;
	printf("%-25s %-25s %-6s %-8s %-6s %-8s %-6s\n", "Destinatination", "Sender",  "mesgId","timeSent","timeIn","priority","resend");
	for(i=0;i<26+26+7+9+7+9+7;i++)
		putchar('-');
	putchar('\n');
	while(M!=NULL)
	{

		printf("%-25s %-25s %-6d %-8d %-6d %-8d %-6d\n", M->destination, M->sender,  M->mesgId,M->timeSent,M->timeIn,M->priority,M->resend);
		M=M->nextmessage;
	}



}*/






