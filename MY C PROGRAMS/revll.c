#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
typedef struct node{
	int data;
	struct node *next;
}Node;


void insertAtEnd(Node **head, int data){
	Node *ptr,*p;
	ptr=(Node*)malloc(sizeof(Node));
	ptr->data=data;
	if(*head==NULL){
	 *head=ptr;
	 ptr->next=NULL;
	 }
	else
	{
	 p=*head;
	while(p->next != NULL)
	{
		p=p->next;
	}
	
	p->next=ptr;
	ptr->next=NULL;
}
}

/* Function to reverse the linked list */
static void rev(Node** head)
{
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;
 
        // Reverse current node's pointer
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head = prev;
}

void linkedListTrav(Node *ptr)
{
	printf("-------DATA------\n");
	while(ptr!=NULL)
	{
		printf("%d-> ",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL");
	printf("\n");
}


int main(){
	Node *head;
	head=NULL;	
	insertAtEnd(&head,5);
	insertAtEnd(&head,4);
	insertAtEnd(&head,3);
	insertAtEnd(&head,2);
	insertAtEnd(&head,1);
	printf("----------------ORIGINAL LINKED LIST--------------\n");
	linkedListTrav(head);
	rev(&head);
	printf("----------------REVERSED LINKED LIST--------------\n");
	linkedListTrav(head);
}
