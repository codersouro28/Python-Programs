//PROGRAM TO CHEKCK IF THE NUMBER IS PERFECT OR NOT.
#include<stdio.h>
int isPerfect(int );
int main()
{
	int n,p;
	printf("Enter the number: ");
	scanf("%d",&n);
	p=isPerfect(n);
	if(p==1)
	printf("%d is Perfect :)\n",n);
	else
	printf("%d is Not Perfect :(\n",n);
    return 0;
}
int isPerfect(int n)
{
	int i,sum=0;
	for(i=1;i<=(n/2);i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	return 1;
	else 
	return 0;
}

	
	
	
