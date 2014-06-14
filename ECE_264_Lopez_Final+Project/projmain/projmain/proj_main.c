#include "prj.h"
#include "pr1.h"
#include "pr2.h"
#include "conio.h"
#include <windows.h> 



struct block *myBlock = NULL;
CRITICAL_SECTION critSection;

void scanInput();
void refreshScreen();
int main()
{
	int halfSecs = 0;
	DWORD dwThreadId;	

	InitializeCriticalSection(&critSection);
	init();
	myBlock = genNewBlock();
	

	printf( "\033[2J"); //clear screen
	if (CreateThread(NULL, //Choose default security
		0, //Default stack size
		(LPTHREAD_START_ROUTINE)&scanInput,//Routine to execute
		(LPVOID) NULL, //Thread parameter
		0, //Immediately run the thread
		&dwThreadId //Thread Id
		) == NULL)
	{
		printf("Error Creating Thread\n");
		return(1);
	}

	while(1)
	{
		Sleep(500);//0.5 seconds
		halfSecs++;
		EnterCriticalSection(&critSection);
		myBlock = processBlock(myBlock);			
		refreshScreen();
			
/*		if(halfSecs == 10)//10*0.5 = 2.5 seconds
		{
			myBlock = genNewBlock();
			if(head == NULL)
				head = myQ;
			tail = addNewBlockToQ(tail,myBlock);	
			halfSecs = 0;
		}*/
		LeaveCriticalSection(&critSection);
		
	}
	return 1;
}

void refreshScreen()
{
	printf( "\033[s");//save cursor position
	printf( "\033[3;1H");//go to line 3		
	printf("====================================================\r\n");
	freshScreen();
	printf("====================================================\r\n");
	display_Statistics();
	
	printf( "\033[u");//restore cursor position
}

void scanInput()
{
	int pos = 0,pressDown = 0;
	char inputChar; 
	while(1)
	{		
		EnterCriticalSection(&critSection);
		printf( "\033[2;1H");//go to line 2
		printf( "\033[K");//clear whole line first
		printf( "\033[2;1H");//go to line 2 again
		printf("			Tetris");
		LeaveCriticalSection(&critSection);
		inputChar = getch();//scanf("%s",input);

		EnterCriticalSection(&critSection);
		if(inputChar != 'k')
			pressDown = 0;
		else
		{
			pressDown++;
			if(pressDown == 5)
			{
				pressDown = 0;
				moveDown(&myBlock);
			}
		}
		if(inputChar == 32)
			rotate(myBlock);
		if(inputChar == 27)
			exit(0);
		if(inputChar == 'j')
			moveLeft(myBlock);
	
		if(inputChar == 'l')
			moveRight(myBlock);
		
		LeaveCriticalSection(&critSection);

	}
}





