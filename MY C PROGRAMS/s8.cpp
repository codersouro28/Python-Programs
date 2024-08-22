#include<stdio.h>
#include<Math.h>
int factorial(int n);
int main()
{
int i,n,x;
float sum=0.0;
float sumf=0.0;
printf("Enter the range:\n");
scanf("%d",&n);
printf("Enter the value of x:\n");
scanf("%d",&x);
for(i=0;i<n;i++)
{
	sum=sum+(pow(x,i)/factorial(i));
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
