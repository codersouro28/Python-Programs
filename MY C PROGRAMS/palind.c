#include<stdio.h>
int rev(int );
void main()
{
	int n,r;
	printf("Enter the number: ");
	scanf("%d",&n);
	r=rev(n);
	if(n==r)
	printf("%d is Palindrome",n);
	else
	printf("%d Not Palindrome",n);
}

int rev(int x)
{
	int r,rev=0;
	while(x!=0)
	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	return rev;
}
