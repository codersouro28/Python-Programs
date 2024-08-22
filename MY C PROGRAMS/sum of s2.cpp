//PROGRAM TO FIND THE SUM OF A SERIES S2.
#include<stdio.h>
int main()
{
	int n,sum=0,i=2,c=1;
	printf("Enter the limit: ");
	scanf("%d",&n);
	for(c=2;c<=n;c++)
	{
		sum =sum+i;
		i=i+3;
	}
printf("Sum=%d",sum);
}

