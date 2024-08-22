//PROGRAM TO FIND THE BINARY OF A NUMBER.

#include<stdio.h>
void main()
{
	int n,r,s=0,i,a[10];
	printf("Enter a decimal number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		a[i]=r;
		n=n/2;
		i++;
	}
	printf("Binary Equivalent:\n");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}

}
