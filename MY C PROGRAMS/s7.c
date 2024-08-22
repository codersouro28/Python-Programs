#include<stdio.h>
#include<Math.h>
int factorial(int n);
int main()
{
int i,n,c=1;
float sum=0.0;
printf("Enter the range:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	sum=sum+(pow(-1,(i+1))*(factorial(c)));
	c=c+2;
	}
	printf("Sum=%.2f",sum);	
}
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	fact=fact*i;
	return fact;
}
