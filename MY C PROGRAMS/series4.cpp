#include<stdio.h>
int main()
{
	int i=1,j,n,c,sum=0,fact=1;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		sum=sum+fact;
		i=i+2;
	}
	printf("Sum=%d",sum);
	return 0;
	
}
