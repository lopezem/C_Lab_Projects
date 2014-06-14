#include "pr1.h"
#include "pr2.h"
#include <time.h>


int totalScore = 0;

struct row *head = NULL;
struct row *tail = NULL;

struct row *pCursor[6];

int ShapeSquare[4][16] = {
	{2,0, 2,1, 3,0, 3,1, -1},
	{2,0, 2,1, 3,0, 3,1, -1},
	{2,0, 2,1, 3,0, 3,1, -1},
	{2,0, 2,1, 3,0, 3,1, -1},
};

int ShapeT[4][16] = {
	{2,0, 2,1, 2,2, 3,1, -1},
	{1,0, 2,0, 2,1, 3,0, -1},
	{2,1, 3,0, 3,1, 3,2, -1},
	{1,1, 2,0, 2,1, 3,1, -1},
};

int ShapeBar[4][16] = {
	{3,0, 3,1, 3,2, 3,3, -1},
	{0,0, 1,0, 2,0, 3,0, -1},
	{3,0, 3,1, 3,2, 3,3, -1},
	{0,0, 1,0, 2,0, 3,0, -1},
};


int (*ShapeLut[SHAPE_MAX])[16] = {ShapeSquare,ShapeT,ShapeBar};

int ShapeSquareDownDetectLUT[4][16] = {
	{3,0, 3,1, -1},
	{3,0, 3,1, -1},
	{3,0, 3,1, -1},
	{3,0, 3,1, -1}
};

int ShapeTDownDetectLUT[4][16] = {
	{2,0, 2,2, 3,1, -1},
	{2,1, 3,0, -1},
	{3,0, 3,1, 3,2, -1},
	{2,0, 3,1, -1}
};

int ShapeBarDownDetectLUT[4][16] = {
	{3,0, 3,1, 3,2, 3,3, -1},
	{3,0, -1},
	{3,0, 3,1, 3,2, 3,3, -1},
	{3,0, -1},	
};

int (*DownCalLut[SHAPE_MAX])[16] = {ShapeSquareDownDetectLUT,ShapeTDownDetectLUT,ShapeBarDownDetectLUT};

int ShapeSquareLeftDetectLUT[4][16] = {
	{2,0, 3,0, -1},
	{2,0, 3,0, -1},
	{2,0, 3,0, -1},
	{2,0, 3,0, -1}
};

int ShapeTLeftDetectLUT[4][16] = {
	{2,0, 3,1, -1},
	{1,0, 2,0, 3,0, -1},
	{2,1, 3,0, -1},
	{1,1, 2,0, 3,1, -1}
};

int ShapeBarLeftDetectLUT[4][16] = {
	{3,0, -1},
	{0,0, 1,0, 2,0, 3,0, -1},
	{3,0, -1},
	{0,0, 1,0, 2,0, 3,0, -1},
};

int (*LeftCalLut[SHAPE_MAX])[16] = {ShapeSquareLeftDetectLUT,ShapeTLeftDetectLUT,ShapeBarLeftDetectLUT};

int ShapeSquareRightDetectLUT[4][16] = {
	{2,1, 3,1, -1},
	{2,1, 3,1, -1},
	{2,1, 3,1, -1},
	{2,1, 3,1, -1}
};

int ShapeTRightDetectLUT[4][16] = {
	{2,2, 3,1, -1},
	{1,0, 2,1, 3,0, -1},
	{2,1, 3,2, -1},
	{1,1, 2,1, 3,1, -1}
};

int ShapeBarRightDetectLUT[4][16] = {
	{3,3, -1},
	{0,0, 1,0, 2,0, 3,0, -1},
	{3,3, -1},
	{0,0, 1,0, 2,0, 3,0, -1},
};

int (*RightCalLut[SHAPE_MAX])[16] = {ShapeSquareRightDetectLUT,ShapeTRightDetectLUT,ShapeBarRightDetectLUT};
int ShapeSquareRotateDetectLUT[4][16] = {
	{-1},
	{-1},
	{-1},
	{-1}
	};
 
	int ShapeTRotateDetectLUT[4][16] = {
	{1,0, -1},
	{3,1, 3,2, -1},
	{2,0, 1,1, -1},
	{2,3, -1}
	};
 
	int ShapeBarRotateDetectLUT[4][16] = {
	{0,0,1,0,2,0, -1},
	{3,1, 3,2, 3,3,-1},
	{0,0,1,0,2,0, -1},
	{3,1, 3,2, 3,3,-1},
	};
 
	int (*RotateCalLut[SHAPE_MAX])[16] = {ShapeSquareRotateDetectLUT,ShapeTRotateDetectLUT,ShapeBarRotateDetectLUT};
void init()
{
		
//===============================================================================================================
	struct row *rows;//every row
	struct row *temp;
	struct row *cache[6];
	int i, j;
	head = (struct row*) malloc(sizeof(struct row));
	
	head ->next = NULL;

	for(j = 0;j<COLS+1;j++)
		{
			head -> content[j] = 0;//sets every column in the rows to be a space
		}
	temp = head;
	for(i = 1;i<ROWS-1;i++)//creates the list of nodes
	{
		temp -> next =(struct row*) malloc(sizeof(struct row));
		
		temp = temp ->next;
		temp -> next =NULL;
		for(j = 0;j<COLS+1;j++)
		{
			temp -> content[j] = 0;//sets every column in the rows to be a space
		}
	}

	tail = (struct row*) malloc(sizeof(struct row));//allocating memory for the tail

	temp -> next = tail;
	tail -> next = NULL;//end of the list
	for(j = 0;j<COLS+1;j++)
		{
			tail -> content[j] = 0;//sets every column in the rows to be a space
		}
	pCursor[0] = head;

	for(i = 1;i<6;i++)
		pCursor[i] = pCursor[i-1]->next;

}

void fillShape(struct block *myBlock, int bFill)
{
	 int row,col,iRow,iCol,ii;
       int (*p)[16];
       row = myBlock->rowNo;
       col = myBlock->columnNo;
       p = ShapeLut[myBlock->shape];
       for(ii = 0; ii < 16;ii++)
       {
              if(p[myBlock->rotate][ii] != -1)
              {
                     iRow = p[myBlock->rotate][ii++];
                     iCol = p[myBlock->rotate][ii];
                     if(bFill == 1)
                           pCursor[iRow + 1]->content[iCol + col] = 1;

                     else
                           pCursor[iRow + 1]->content[iCol + col] = 0;
              }
              else
                     break;
       }
	return;
}

int processBlockDown(struct block *myBlock)
{
	int (*p)[16];
	int ii,jj,iRow,iCol;	

	p = DownCalLut[myBlock->shape];
	for(ii = 0; ii < 16;ii++)
	{
		if(p[myBlock->rotate][ii] != -1)
		{
			iRow = p[myBlock->rotate][ii++];
			iCol = p[myBlock->rotate][ii];

			if(pCursor[iRow] == NULL)//block hits the bottem
				return 0;//can't move down anymore if already at the floor

			if (pCursor[iRow + 2]->content[myBlock->columnNo + iCol] == 1)//block lands on another block
			{//Can't move down anymore if the grid being occupied
				checkRowsDelete();				
				return 0;
			}
		}
		else//keep going down
			break;
	}

	fillShape(myBlock,0);
	myBlock->rowNo++;//block moving down, increase the rowNo
	//remember also move the pCursor down together with the block
	for(ii = 0;ii < 6;ii++)
	{	
		pCursor[ii] = pCursor[ii]->next;		
	}
	fillShape(myBlock,1);
	return 1;
}

struct block *processBlock (struct block * pBlock)//determines wether to get a new block or not
{
	int ii;
	processBlockDown(pBlock);
	if(processBlockDown(pBlock) == 0)// has it hit the bottom?
	{
		/*the block can't move down any further*/
		/*delete the original block*/
		free(pBlock);
		/*reset the pCursor to the head*/
		pCursor[0] = head;//cursor is at the top now
		for(ii = -1;ii < 4;ii++)
		{		
			pCursor[ii + 1] = pCursor[ii]->next;		
		}
		/*return the new block*/
		return genNewBlock();
	}
	else
		
	return pBlock;
}

void 	freshScreen ()
{
	int i;
	struct row *ptemp;
	//ptemp = (struct row*) malloc(sizeof(struct row));
	ptemp = head;
	while(ptemp != NULL)
	{
		for (i = 0;i<COLS;i++)
		{
			if (ptemp -> content[i] != NULL)
				printf(" *");

			else
				printf("  ");
		}
		printf("\t|");
		printf("\n");
		ptemp = ptemp -> next;	
	}
}


void rotate(struct block *block)
{
}

void moveLeft(struct block *block)
{	
	int (*p)[16];
	int ii,jj,iRow,iCol;	

	p = LeftCalLut[block->shape];
	for(ii = 0; ii < 16;ii++)
	{
		if(p[block->rotate][ii] != -1)
		{
			iRow = p[block->rotate][ii++];
			iCol = p[block->rotate][ii];

			if(block->columnNo + iCol -1 < 0)
				return;
				

			if (pCursor[iRow + 1]->content[block->columnNo + iCol-1] == 1)
			{//Can't move left anymore if the grid being occupied
				//checkRowsDelete();				
				return;
			}
		}
		else
			break;
	}

	fillShape(block,0);
	block->columnNo--;//block moving left, decrease the columnNo
	//remember also move the pCursor down together with the block

	fillShape(block,1);

	return;
}

void moveDown(struct block **block)
{	
	return;
}

void moveRight(struct block *block)
{	
	int (*p)[16];
	int ii,jj,iRow,iCol;	

	p = LeftCalLut[block->shape];
	for(ii = 0; ii < 16;ii++)
	{
		if(p[block->rotate][ii] != -1)
		{
			iRow = p[block->rotate][ii++];
			iCol = p[block->rotate][ii];

			if(block->columnNo + iCol -1 >= COLS)
				return;
				

			if (pCursor[iRow + 1]->content[block->columnNo + iCol-1] == 1)
			{//Can't move left anymore if the grid being occupied
				//checkRowsDelete();				
				return;
			}
		}
		else
			break;
	}

	fillShape(block,0);
	block->columnNo++;//block moving right, decrease the columnNo
	//remember also move the pCursor down together with the block

	fillShape(block,1);

	return;
}

void display_Statistics()
{
	printf("statistics");
}

void checkRowsDelete()
{
	
}

void 	appExit()
{
	FILE *outfile,*infile;
	int highscore_text = 0,maxscore;
	infile = fopen("High_Score.txt","r");
	outfile = fopen("High_Score.txt","w");

	if(infile == NULL)
	{
		printf("No new high score previously.\n");
	}
	else if(infile !=NULL)
	{
		fscanf(infile,"%d",&highscore_text);
	}

	maxscore = (totalScore>highscore_text)?totalScore:highscore_text;
	

	while(1)
	{
		tail = head;

		if(head->next == NULL)
		{
			free(head);
			break;
		}
		head =head->next;
		free(tail);
	}
	exit(0);
}
	