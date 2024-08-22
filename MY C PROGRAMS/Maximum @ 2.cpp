//PROGRAM TO FIND THE MAXIMUM BETWEEN TWO INPUTTED NUMBERS.
#include<stdio.h>
int max(int n1,int n2);

int main()
{
	int a,b,maximum;
	
	printf("Enter First No.: ");
	scanf("%d",&a);
	printf("Enter Second No.: ");
    scanf("%d",&b);
    maximum=max(a,b);
    printf("Maximum=%d",maximum);
    return 0;
}

int  max(int n1,int n2)
{
	int max;
	if(n1>n2)
	max=n1;
	else
	max=n2;
	return max;
}
