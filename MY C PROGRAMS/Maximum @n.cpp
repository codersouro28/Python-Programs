//PROGRAM TO FIND THE MAXIMUM AMONG FIVE NUMBERS.
#include<stdio.h>
int main()
{
int max=0,num,n=1,limit;
printf("Enter the limit: ");
scanf("%d",&limit);
while(limit>0)
{
	printf("Enter No. %d:\n ",n);
	scanf("%d",&num);
	if(num >max)
	max=num;
	limit--;
	n++;
	}
	printf("The maximum number is=%d",max);
	
}
