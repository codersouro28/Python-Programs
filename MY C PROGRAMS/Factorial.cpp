//PROGRAM TO FIND THE FACTORIAL OF A NUMBER.

#include<stdio.h>
int facto(int n);
int main()
{
	int fact,n;
	printf("Entet a number: ");
	scanf("%d",&n);
	fact=facto(n);
	printf("Factorial of a number=%d",fact);
	return 0;
}
int facto(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	f=f*i;
	return f;
}
