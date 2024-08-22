//PROGRAM TO DISPLAY FIRST N NATURAL NUMBERS.
#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter the range: ");
	scanf("%d",&n);
	printf("Natural numbers till %d are:\n",n);
	for(i=1;i<=n;i++)
	printf("%d\t",i);
}
