#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct node
{
	int data;
	struct node *next;
	
 } queue; 


int isEmpty(queue *tail)
{
	return(tail==NULL);
}

void enqueue(queue **tail,int n)
{
	queue *newNode=(queue*)malloc(sizeof(queue));
	newNode->data=n;
	
	if((*tail)==NULL)
		newNode->next=newNode;
	else
	{
		newNode->next = (*tail)->next;
		(*tail)->next = newNode;
		
	}
	*tail = newNode;
	
}

int dequeue(queue **tail)
{
	int temp;
	queue *r=(*tail)->next;
	temp=r->data;
	if((*tail)==r)
		*tail=NULL;
	else
		(*tail)->next=r->next;
	free(r);
	return temp;
}


void main()
{
	queue *q=NULL;
	
	int ch,val,n;
	while(1)
	{
		system("cls");
		
		printf("ENTER 1 TO ENQUEUE\n"
			   "ENTER 2 TO DEQUEUE\n"
			   "ENTER 3 TO DISPLAY QUEUE\n");
			   
		printf("ENTER YOUR CHOICE:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: 
						printf("Enter the value you want to Enqueue");
						scanf("%d",&val);
						enqueue(&q,val);	
					break;
			case 2:
					if(isEmpty(q))
						printf("Queue Underflow");
					else
					{
						n=dequeue(&q);
						printf("Dequeued:%d",n);
					}
					break;
			/*case 3:
					display(q);
					break;*/
			default:
					printf("Wrong Choice");
				
		}
		getch();
		
	}
	
	
}
	
	

		
