#include<stdio.h>

int sod(int n)
{
	if(n==0)
	return 0;
	else
	{
	return(sod(n/10)+n%10);
		
	}
}
void main()
{
	printf("%d",sod(1234));
	
}
