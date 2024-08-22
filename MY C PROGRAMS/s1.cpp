//PROGRAM TO PRINT A SERIES 1
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the limit: ");
	scanf("%d",&n);
	for(i=5;i<=n;i=i+5)
	{
		printf("%d\t",i);
	}
	return 0;
}
