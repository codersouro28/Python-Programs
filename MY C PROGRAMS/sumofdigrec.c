#include<stdio.h>

int sod(int n)
{
	static int sum=0;
	if(n==0)
	return sum;
	else
	{
	sum=sum+(n%10);
	sod(n/10);
		
	}
}
void main()
{
	printf("%d",sod(1234));
	
}
