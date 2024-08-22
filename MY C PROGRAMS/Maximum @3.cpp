//PROGRAM TO FIND THE MAXIMUM AMONG THREE NUMBERS.

#include<stdio.h>
int max(int n1,int n2,int n3);

int main()
{
	int a,b,c,maximum;
	printf("Enter the First Number :");
	scanf("%d",&a);
	printf("Enter the Second Number :");
	scanf("%d",&b);
    printf("Enter the Third Number :");
	scanf("%d",&c);
	maximum=max(a,b,c);
	printf("Maximum number is=%d\n",maximum);
    return 0;
}
int max(int n1,int n2,int n3)
{
	int max;
	if(n1>n3&&n1>n3)
	max=n1;
	else
	{
		if (n2>n3)
		max =n2;
		else
	    max=n3;
	}
	return max;
}
