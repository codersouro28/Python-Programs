#include<stdio.h>
#include<Math.h>
int main()
{
	int n,i=1,sum=0,c=1;
	printf("Enter the number of terms:\n");
	scanf("%d",&n);
	while(c<=n)
	{
		sum=sum+pow(i,c);
		i=i+2;
		c=c+1;
	}
	printf("Series sum=%d",sum);
}
