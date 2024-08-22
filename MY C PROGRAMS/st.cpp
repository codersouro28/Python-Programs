//POP , PUSH ,COUNT AND DISPLAY IN STACK.....
#include<stdio.h>
#define MAX 25
int indx=-1,STACK[MAX],c=0;
void PUSH(int);
void pop();
void count();
void display();
int main()
{
	int ch,x;
	while(ch!=5)
	{
		printf("\n1 for PUSH\n2 for POP\n3 for COUNT\n4 for DISPLAY\n");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\n Enter a value : ");
			scanf("%d",&x);
			PUSH(x);
			break;
			case 2:
			pop();
			break;
			case 3:
			count();
			break;
			case 4:
			display();
			break;
			default:
			printf("\nWrong choice! Try again");
				
		}
	}
}
	void PUSH(int m)
	{
		if(indx>=MAX)
		printf("STACK IS OVERFLOW\n");
		else
		{
			STACK[++indx]=m;
		}
	}
	void pop()
	{
		int t;
		if(indx<0)
		printf("\n STACK IS UNDERFLOW\n");
		else
		{
		printf("\n POPPED ELEMENT IS %d",STACK[indx]);
		indx--;
		}
	}
	void count()
	{
		printf("\n Total number of STACK elements :%d\n",(indx+1));
		
	}
	void display()
	{
	int i;
	printf("\nElememt of STACK is\n");
	for(i=indx;i>=0;i--)
	printf("%d ",STACK[i]);
	}
