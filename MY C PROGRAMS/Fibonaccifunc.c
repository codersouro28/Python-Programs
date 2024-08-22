#include<stdio.h>

void fibonacci(int n);

void main()
{
	int lim;
	printf("Enter the limit:");
	scanf("%d",&lim);
	printf("Fibonacci----\n");
	fibonacci(lim);
	
}
void fibonacci(int n)
{
	int i,a=0,b=1,c;
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}
