#include<stdio.h>
int power(int y,int x);
void main()
{
	int a,b,p;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("Enter the power to which %d is to be raised: ",a);
	scanf("%d",&b);
	p=power(a,b);
	printf("%d ^ %d = %d",a,b,p);
}

int power(int y,int x)
{
	int i,p=1;
	for(i=1;i<=x;i++)
	{
		p=p*y;
	}
	return p;
}
