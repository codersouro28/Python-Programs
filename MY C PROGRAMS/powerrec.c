#include<stdio.h>
int power(int x,int y)
{
	if(y==0)
	return 1;
	else
	return (x*(power(x,y-1)));
}
void main()
{
	int a,b;
	printf("Enter the base and power: ");
	scanf("%d %d",&a,&b);
	printf("%d^%d=%d",a,b,power(a,b));
}
