#include "prj.h"
#include "pr1.h"

void init();
struct block *processBlock (struct block * head);
void freshScreen ();

void rotate(struct block *block);
void moveLeft(struct block *block);
void moveRight(struct block *block);
void moveDown(struct block **block);
void display_Statistics();
void checkRowsDelete();

void 	appTerminate (struct block *head);
void 	free_list(struct block *head);
void set_priority (struct block *head,  int newPriority);
struct word * sortWordList(struct block *head);

