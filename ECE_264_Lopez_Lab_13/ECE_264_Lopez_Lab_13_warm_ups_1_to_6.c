#include <stdio.h>
#include <stdlib.h>


									//warmup 1
//struct node
//{
//	int data;
//	struct node *next;
//};
//
//int main()
//{
//	struct node *head, *pNode, *temp;
//	
//	head = (struct node*) malloc(sizeof(struct node));
//	
//	if(head == NULL)
//	{
//		printf("Allocation error!\n");
//		exit(1);
//	}
//
//	head -> next = NULL;
//	head -> data = 100;
//
//	pNode = (struct node*) malloc(sizeof(struct node));
//	pNode -> data = 200;
//	pNode -> next = NULL;
//
//	head ->next = pNode;
//
//	pNode = head;
//	while(pNode != NULL)
//	{
//		temp = pNode;
//		pNode = temp -> next;
//		
//		free(temp);
//		//printf("%d ", pNode ->data);
//		//pNode = pNode -> next;	
//	}
//
//	free(head);
//	return 0;
//}

//	//								warmup 2
//struct node
//{
//	int data;
//	struct node *next;
//};
//
//void displayList(struct node *pHead);
//void freeList(struct node *pHead);
//struct node * createList(void);
//
//
//int main()
//{	
//	struct node *head;
//	head = createList();
//	displayList(head);
//
//	freeList(head);
//
//	
//
//	free(head);
//	return 0;
//}
//
//struct node * createList(void)
//{
//	struct node *pHead, *pNode;
//	pHead = (struct node*) malloc(sizeof(struct node));
//	
//	if(pHead == NULL)
//	{
//		printf("Allocation error!\n");
//		exit(1);
//	}
//
//	pHead -> next = NULL;
//	pHead -> data = 100;
//
//	pNode = (struct node*) malloc(sizeof(struct node));
//	pNode -> data = 200;
//	pNode -> next = NULL;
//
//	pHead ->next = pNode;
//	return pHead;
//}
//
//void displayList(struct node *pHead)
//{
//	struct node *pNode;
//	pNode = pHead;
//	while(pNode != NULL)
//	{
//		printf("%d ", pNode ->data);
//		pNode = pNode -> next;	
//	}
//}
//
//void freelist(struct node *pHead)
//{
//	struct node *pNode, *temp;
//	pNode = pHead;
//	while(pNode != NULL)
//	{
//		temp = pNode;
//		pNode = temp -> next;
//	}
//}

									//warmup 3
//struct node
//{
//	int data;
//	struct node *next;
//};
//
//void displayList(struct node *pHead);
//void freeList(struct node *pHead);
//struct node * createList(void);
//struct node * addNodeToBack (struct node *head);
//
//
//int main()
//{	
//	struct node *head;
//	head = createList();
//	displayList(head);
//	addNodeToBack(head);
//	freeList(head);
//	
//	return 0;
//}
//
//struct node * createList(void)
//{
//	struct node *pHead, *pNode;
//	pHead = (struct node*) malloc(sizeof(struct node));
//	
//	if(pHead == NULL)
//	{
//		printf("Allocation error!\n");
//		exit(1);
//	}
//
//	pHead -> next = NULL;
//	pHead -> data = 100;
//
//	pNode = (struct node*) malloc(sizeof(struct node));
//	pNode -> data = 200;
//	pNode -> next = NULL;
//
//	pHead ->next = pNode;
//	return pHead;
//}
//
//void displayList(struct node *pHead)
//{
//	struct node *pNode;
//	pNode = pHead;
//	while(pNode != NULL)
//	{
//		printf("%d ", pNode ->data);
//		pNode = pNode -> next;	
//	}
//}
//
//void freelist(struct node *pHead)
//{
//	struct node *pNode, *temp;
//	pNode = pHead;
//	while(pNode != NULL)
//	{
//		temp = pNode;
//		pNode = temp -> next;
//		free(temp);	
//	}
//}
//
//
//
//struct node * addNodeToBack (struct node *head)//add node to fron of list
//{
//	struct node *pNode, *pWalker;
//	pNode = (struct node*)malloc(sizeof(struct node));
//	if(pNode == NULL)
//	{
//		printf("Allocation error");
//		return head;
//	}
//	pWalker = head;
//
//	while(pWalker -> next = NULL)
//	{
//		pWalker = pWalker -> next;
//	}
//
//	pNode -> next = head;
//	return pNode;
//}


//									//warmup 4
//struct node
//{
//	int data;
//	struct node *next;
//};
//
//void displayList(struct node *pHead);
//void freeList(struct node *pHead);
//struct node * createList(void);
//struct node * addNodeToBack (struct node *head);
//struct node * addNodeToFront (struct node *head);
//
//
//int main()
//{	
//	struct node *head;
//	head = createList();
//	displayList(head);
//	freeList(head);
//	addNodeToBack(head);
//	addNodeToFront(head);
//	return 0;
//}
//
//struct node * createList(void)
//{
//	struct node *pHead, *pNode;
//	pHead = (struct node*) malloc(sizeof(struct node));
//	
//	if(pHead == NULL)
//	{
//		printf("Allocation error!\n");
//		exit(1);
//	}
//
//	pHead -> next = NULL;
//	pHead -> data = 100;
//
//	pNode = (struct node*) malloc(sizeof(struct node));
//	pNode -> data = 200;
//	pNode -> next = NULL;
//
//	pHead ->next = pNode;
//	return pHead;
//}
//
//void displayList(struct node *pHead)
//{
//	struct node *pNode;
//	pNode = pHead;
//	while(pNode != NULL)
//	{
//		printf("%d ", pNode ->data);
//		pNode = pNode -> next;	
//	}
//}
//
//void freelist(struct node *pHead)
//{
//	struct node *pNode, *temp;
//	pNode = pHead;
//	while(pNode != NULL)
//	{
//		temp = pNode;
//		pNode = temp -> next;
//		free(temp);	
//	}
//}
//
//
//
//struct node * addNodeToBack (struct node *head)//add node to fron of list
//{
//	struct node *pNode, *pWalker;
//	pNode = (struct node*)malloc(sizeof(struct node));
//	if(pNode == NULL)
//	{
//		printf("Allocation error");
//		return head;
//	}
//	pWalker = head;
//
//	while(pWalker -> next != NULL)
//	{
//		pWalker = pWalker -> next;
//	}
//	if(pWalker == NULL)
//		return pNode;
//
//	else
//	{
//		pWalker -> next = pNode;
//		pNode -> next = head;
//		return head;
//	}
//}
//
//struct node * addNodeToFront (struct node *head)//add node to fron of list
//{
//	struct node *pNode;
//	pNode = (struct node*)malloc(sizeof(struct node));
//	if(pNode == NULL)
//	{
//		printf("Allocation error");
//		return head;
//	}
//	pNode -> next = head;
//	return pNode;
//}

//									//warmup 5
//struct node
//{
//	int data;
//	struct node *next;
//};
//
//void displayList(struct node *pHead);
//void freeList(struct node *pHead);
//struct node * createList(void);
//struct node * addNodeToBack (struct node *head);
//struct node * addNodeToFront (struct node *head);
//struct node * delete_ith_node (struct node *head, int i);
//
//
//int main()
//{	
//	struct node *head;
//	int i;
//	head = createList();
//	displayList(head);
//	//freeList(head);
//	addNodeToBack(head);
//	addNodeToFront(head);
//	printf("\n\nEnter the ith node you would like to delete: i = ");
//	scanf("%d",&i);
//	delete_ith_node(head, i);
//	return 0;
//}
//
//struct node * createList(void)
//{
//	struct node *pHead, *pNode;
//	pHead = (struct node*) malloc(sizeof(struct node));
//	
//	if(pHead == NULL)
//	{
//		printf("Allocation error!\n");
//		exit(1);
//	}
//
//	pHead -> next = NULL;
//	pHead -> data = 100;
//
//	pNode = (struct node*) malloc(sizeof(struct node));
//	pNode -> data = 200;
//	pNode -> next = NULL;
//
//	pHead ->next = pNode;
//	return pHead;
//}
//
//void displayList(struct node *pHead)
//{
//	struct node *pNode;
//	pNode = pHead;
//	while(pNode != NULL)
//	{
//		printf("data = %d\n", pNode ->data);
//		pNode = pNode -> next;	
//	}
//}
//
//void freelist(struct node *pHead)
//{
//	struct node *pNode, *temp;
//	pNode = pHead;
//	while(pNode != NULL)
//	{
//		temp = pNode;
//		pNode = temp -> next;
//		free(temp);	
//	}
//}
//
//
//
//struct node * addNodeToBack (struct node *head)//add node to fron of list
//{
//	struct node *pNode, *pWalker;
//	pNode = (struct node*)malloc(sizeof(struct node));
//	if(pNode == NULL)
//	{
//		printf("Allocation error");
//		return head;
//	}
//	pWalker = head;
//
//	while(pWalker -> next != NULL)
//	{
//		pWalker = pWalker -> next;
//	}
//	if(pWalker == NULL)
//		return pNode;
//
//	else
//	{
//		pWalker -> next = pNode;
//		pNode -> next = head;
//		return head;
//	}
//}
//
//struct node * addNodeToFront (struct node *head)//add node to fron of list
//{
//	struct node *pNode;
//	pNode = (struct node*)malloc(sizeof(struct node));
//	if(pNode == NULL)
//	{
//		printf("Allocation error");
//		return head;
//	}
//	pNode -> next = head;
//	return pNode;
//}
//
//struct node * delete_ith_node (struct node *head, int i)
//{
//	
//	struct node *pNode, *pWalker, *temp;
//	int check = 0;
//	
//	pNode = (struct node*)malloc(sizeof(struct node));
//	if(head == NULL)
//	{
//		return NULL;
//	}
//	pWalker = head;
//	while(pWalker -> next != NULL)
//	{
//		if(check == i)
//		{
//			temp = pWalker -> next;
//			free(temp);
//			printf("\nSuccessfuly detelted the %d(th/st/nd/rd) node.\n",i);
//			return pNode;
//		}
//
//		else if(check>=i)
//		{
//			printf("i is out of range.\n");
//			return NULL;	
//		}
//		check++;
//	}
//
//	if(pWalker == NULL)
//		return pNode;
//
//	else
//	{
//		pWalker -> next = pNode;
//		pNode -> next = head;
//		return head;
//	}
//}

									//warmup 6
struct node
{
	int data;
	struct node *next;
};

void displayList(struct node *pHead);
void freeList(struct node *pHead);
struct node * createList(void);
struct node * addNodeToBack (struct node *head);
struct node * addNodeToFront (struct node *head);
struct node * delete_ith_node (struct node *head, int i);
struct node * add_newnode_to_i (struct node *head, int i);


int main()
{	
	struct node *head;
	int i;
	head = createList();
	displayList(head);
	//freeList(head);
	addNodeToBack(head);
	addNodeToFront(head);

	printf("\n\nEnter the ith node you would like to delete: i = ");
	scanf("%d",&i);
	delete_ith_node(head, i);

	printf("\n\nEnter the new node to the ith element: i = ");
	scanf("%d",&i);
	add_newnode_to_i(head, i);
	return 0;
}

struct node * createList(void)
{
	struct node *pHead, *pNode;
	pHead = (struct node*) malloc(sizeof(struct node));
	
	if(pHead == NULL)
	{
		printf("Allocation error!\n");
		exit(1);
	}

	pHead -> next = NULL;
	pHead -> data = 100;

	pNode = (struct node*) malloc(sizeof(struct node));
	pNode -> data = 200;
	pNode -> next = NULL;

	pHead ->next = pNode;
	return pHead;
}

void displayList(struct node *pHead)
{
	struct node *pNode;
	pNode = pHead;
	while(pNode != NULL)
	{
		printf("data = %d\n", pNode ->data);
		pNode = pNode -> next;	
	}
}

void freelist(struct node *pHead)
{
	struct node *pNode, *temp;
	pNode = pHead;
	while(pNode != NULL)
	{
		temp = pNode;
		pNode = temp -> next;
		free(temp);	
	}
}

struct node * addNodeToBack (struct node *head)//add node to fron of list
{
	struct node *pNode, *pWalker;
	pNode = (struct node*)malloc(sizeof(struct node));
	if(pNode == NULL)
	{
		printf("Allocation error");
		return head;
	}
	pWalker = head;

	while(pWalker -> next != NULL)
	{
		pWalker = pWalker -> next;
	}
	if(pWalker == NULL)
		return pNode;

	else
	{
		pWalker -> next = pNode;
		pNode -> next = head;
		return head;
	}
}

struct node * addNodeToFront (struct node *head)//add node to fron of list
{
	struct node *pNode;
	pNode = (struct node*)malloc(sizeof(struct node));
	if(pNode == NULL)
	{
		printf("Allocation error");
		return head;
	}
	pNode -> next = head;
	return pNode;
}

struct node * delete_ith_node (struct node *head, int i)
{
	
	struct node *pNode, *pWalker, *temp;
	int check = 1;
	
	pNode = (struct node*)malloc(sizeof(struct node));
	if(head == NULL)
	{
		return NULL;
	}
	pWalker = head;
	while(check)
	{
		
		if(check == i)
		{
			free(pWalker);
			printf("\nSuccessfuly detelted the %d(th/st/nd/rd) node.\n",i);
			check = 0;
		}
		else if (check < i)
		{
		check++;
		pWalker = pWalker -> next;
		}
	}
	while(pWalker -> next != NULL)
	{
		
		pWalker = pWalker -> next;


	}

	if(pWalker == NULL)
		return pNode;

	else
	{
		
		pWalker -> next = pNode;
		pNode -> next = head;
		return head;
	}
}

struct node * add_newnode_to_i (struct node *head, int i)
{
	struct node *pNode, *pWalker, *temp;
	int check = 1;
	
	pNode = (struct node*)malloc(sizeof(struct node));
	if(head == NULL)
	{
		return NULL;
	}
	pWalker = head;
	while(check && pWalker -> next != NULL)
	{
		
		if(check == i)
		{
			printf("\ntest\n");
			pNode -> next = pWalker ->next;
			
			pWalker -> next = temp;
			
			temp -> next = pNode;
					
			check = 0;
			
		}

		else if(check <= i)
		{

			check++;
		}
		else if(check >= i)
		{
			printf("i is out of range.\n");
			return NULL;	
		}

		pWalker = pWalker -> next;
	}

	if(pWalker == NULL)
	{
		return pNode;
	}
	else
	{
		
		pWalker -> next = pNode;
		pNode -> next = head;
		printf("\nSuccessfuly added the new node to the %d(th/st/nd/rd) element.\n",i);
		return head;
	}
}