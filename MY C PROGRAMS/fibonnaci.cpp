//PROGRAM TO PRINT THE FIBONACCI SERIES



#include<stdio.h>
int main()
{
int a,b,c,n,i;
a=0;
b=1;
c=0;
printf("Enter the number of terms: ");
scanf("%d",&n);
printf("%2d",a);
printf("%2d",b);
for(i=1;i<(n-1);i++)
{
	c=a+b;
	printf("%2d",c);
	a=b;
	b=c;
}
return 0;
}
