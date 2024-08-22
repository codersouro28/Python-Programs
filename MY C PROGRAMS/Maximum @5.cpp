//PROGRAM TO FIND THE MAXIMUM AMONG FIVE NUMBERS.
#include<stdio.h>
int main()
{
int max=0,num,n=1;
while(n<=5)
{
	printf("Enter No. %d:\n ",n);
	scanf("%d",&num);
	if(num >max)
	max=num;
	n++;
	}
	printf("The maximum number is=%d",max);
	
}
