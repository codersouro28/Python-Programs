#include<stdio.h>
int hcf(int a,int b)
{   
     
	if(a==b)
	return a;
	else
	{
		if(a>b)
		return hcf(a-b,b);
		else
		return hcf(a,b-a);
		
	}
}

void main()
{
	int n1,n2,gcd;
	printf("Enter two numbers: ");
	scanf("%d %d",&n1,&n2);
	gcd=hcf(n1,n2);
	printf("GCD=%d",gcd);
}
