#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
int data;
struct node *add;
};struct node *temp,*next,*prev,*new1,*start=NULL;
void create();
void insert_middle();
void insert_last();
void insert_first();
void delete_middle();
void delete_first();
void delete_last();
void display();
int main() 
{
int choice ;
do
{
printf ("------linked list Menu-------\n") ;
printf("1.create\n");
printf("2.Insert first\n");
printf("3.Insert last\n");
printf("4.Insert middle\n");
printf("5.delete first\n");
printf("6.delete_last\n");
printf("7.delete middle\n");
printf("8.display\n");
printf("-------------------------\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch (choice) 
{
case 1:create() ;
       break;
case 2:insert_first();
       break;
case 3:insert_last();
       break;
case 4:insert_middle();
       break;
case 5:delete_first();
       break;
case 6:delete_last();
       break;
case 7:delete_middle();
       break;
case 8:display ();
       break;      
case 9:exit(0);
       break;
default: printf("Enter invalid choice\n");
}
}while(choice!=9);
}
void create()
{
int n;
char ch;
printf("Enter a number you want to insert:");
scanf("%d",&n);
start=(struct node*)(malloc(sizeof(struct node)));
start->data=n;
start->add=NULL;
temp=start;
printf("Do you want to continue:\n");
fflush(stdin);
scanf("%c",&ch);
while(ch=='y'||ch=='Y')
{
printf("Enter next number you want to insert\n");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->add=NULL;
temp->add=new1;
temp=temp->add;
printf("Do you want to continue:\n");
fflush(stdin);
scanf("%c",&ch);
}
}
void display()
{
if(start==NULL)
printf("The list is not found");
else
{
temp=start;
while(temp!=NULL)
{
printf("linked list elements are:");
printf("%d\n",temp->data);
temp=temp->add;
}
}
}
void insert_first()
{
int n;
if(start==NULL)
printf("The list is not found");
else
{
printf("Enter a number you want to insert");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->add=start;
//start->add=new1;
start= new1;
}
}

void insert_last()
{
int n;
if(start==NULL)
printf("The list is not found");
else
{
printf("Enter a number you want to insert");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->add=NULL;
temp=start;
while(temp->add!=NULL)
{
temp=temp->add;
}
temp->add=new1;
}
}
void insert_middle()
{
int n,i=1,pos;
if(start==NULL)
printf("The list is not found");
else
{
printf("Enter a number you want to insert");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->add=NULL;
printf("Enter your position");
scanf("%d",&pos);
next=start;
while(i<pos)
{
prev=next;
next=next->add;
i++;
}
prev->add=new1;
new1->add=next;
}
}

void delete_first()
{
int n;
if(start==NULL)
printf("The list is not found");
else
{
temp=start;
start=start->add;
printf("the deleted element is %d", temp->data);
free(temp);
}
}

void delete_last()
{
int n;
if(start==NULL)
printf("The list is not found");
else
{
temp=start;
while(temp->add!=NULL)
{
prev=temp;
temp=temp->add;
}
prev->add=NULL;
printf("the deleted element is %d", temp->data);
free(temp);
}
}
void delete_middle()
{
int n,i=1,pos;
if(start==NULL)
printf("The list is not found");
else
{
printf("Enter your position");
scanf("%d",&pos);
temp=start;
while(i<pos)
{
prev=temp;
temp=temp->add;
i++;
}
next=temp->add;
prev->add=next;
printf("the deleted element is %d", temp->data);
free(temp);
}
}
