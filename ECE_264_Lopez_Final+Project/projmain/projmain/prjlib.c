#include "pr1.h"
#include "prj.h"
#include <time.h>

struct message* genNewMessages(int seed)
{
	static int visit=0;
	static int clock=1;

	struct  message*list=NULL;
	struct  message*prev=NULL;
	struct  message*tmp=NULL;
	int i;

	int num;

	
	if(visit==0)
	{
		visit=1;
		srand(seed);
		//srand(time(NULL));
	}

	num=3+rand()%8;

	list=(struct message *)malloc(sizeof(struct message));
	assignData(list,  clock);
	num--;
	prev=list;
	for(i=0;i<num;i++)
	{
		tmp=(struct message *)malloc(sizeof(struct message));
		assignData(tmp,  clock);
		prev->nextmessage=tmp;

		prev=tmp;
	}



	


	

	clock = clock +1;
//	displayNewNessages(list);
	return list;

}
void assignData(struct message* M, int clock)
{
	char * senders[10]={"Albert", "Bev", "Cheyenne", "Donovan", "Eve", "Francis", "George", "Hannah", "Isaac", "Jennifer"};
	char *rec[5]={"Kraig","Lana", "Meagan", "Nancy", "Oscar"};
	static int IDG=10;
	char pri[]={0,0,0,0,0,0,0,0,1,2,1,1};
	char *messages[]={"Hi whats up?", "see you tomorrow", "send me that document", "will see you next week"};

	char res[]={0,0,0,0,0,0,0,0,1,1};

	int i;
	int num;
	
	M->mesgId=IDG;
	IDG++;

	M->priority=pri[rand()%(sizeof(pri))];
	M->resend=0;
	strcpy(M->M, messages[rand()%(sizeof(messages)/sizeof(char *))]);

	num=rand()%5;
	strcpy(M->destination, rec[num]);


	num=rand()%10;

	strcpy(M->sender, senders[num]);


	M->timeSent=clock;
	M->timeIn=0;
	M->nextmessage=NULL;




	
}

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



}






