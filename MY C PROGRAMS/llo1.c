#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct Node
{
	int data;
	struct Node *next;
 }node;

typedef struct Header
{
	node *head;
	node *tail;
 }Header;
 
 
 
 void insertAtEnd(Header *q, int n)
 {
 	node *newNode;
 	newNode=(node*)malloc(sizeof(node));
 	newNode->data=n;
 	newNode->next=NULL;
 	if(q->tail==NULL)
 		q->head=q->tail=newNode;
 	else{
 		q->tail->next=newNode;
 		q->tail=newNode;
 	}
}

void deleteAtBeginning(Header *q)
{
	int temp;
	node *n;
	temp=q->head->data;
	n=q->head;
	
	if(q->head == q->tail)
		q->head = q->tail =NULL;
	else
		q->head=q->head->next;
	free(n);
		
}

void display(Header *q)
{
	while(q!=NULL)
	{
		printf("%d->",q->head->data);
		q->head=q->head->next;
	}
}
void main()
{
	Header *q=(Header*)malloc(sizeof(Header));
	q->head=q->tail=NULL;
	
	int ch,val,n;
	while(1)
	{
		system("cls");
		
		printf("ENTER 1 TO INSERT\n"
			   "ENTER 2 TO DELETE\n"
			   "ENTER 3 TO DISPLAY\n");
			   
		printf("ENTER YOUR CHOICE:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: 
						printf("Enter the value you want to Insert");
						scanf("%d",&val);
						insertAtEnd(q,val);	
					break;
			case 2:
						deleteAtBeginning(q);				
					
					break;
			case 3:
					display(q);
					break;
			default:
					printf("Wrong Choice");
				
		}
		getch();
		
	}
	
	
}
	
	

