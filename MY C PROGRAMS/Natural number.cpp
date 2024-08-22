//PROGRAM TO PRINT FIRST N NATURAL NUMBERS.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Natural numbers till %d:\n",n);
	for (int i=1;i<=n;i++)
	printf("%d \t",i);
	return 0;
}
