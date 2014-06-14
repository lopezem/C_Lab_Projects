#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef _PROJ_
#define _PROJ_


#define ROWS 30
#define COLS 7

enum SHAPE
{
	SHAPE_SQUARE = 0,
	SHAPE_T,
	SHAPE_BAR,
/*	SHAPE_L_GUN,
	SHAPE_R_GUN,
	SHAPE_L_Z,
	SHAPE_R_Z,*/
	SHAPE_MAX
};

struct row {
	char content[COLS + 1];
	struct row *next;
};

struct block {
	int columnNo;
	int rowNo;
	int rotate;
	enum SHAPE shape;
	struct block *nextBlock;
};


#endif
