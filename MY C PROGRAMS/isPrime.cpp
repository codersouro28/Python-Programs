//PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS PRIME OR NOT

#include<stdio.h>
int isPrime(int n);
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	int x=isPrime(a);
	if(x==1)
	{
		printf("%d is a Prime No.",a);
		return 1;
	}
	else
	{
	printf("%d is a Non-Prime No.",a);
		return 0;
	}
}
	
	int isPrime(int n)
	{
	int c=0;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c>0)
	return 0;
	else
	return 1;
}
