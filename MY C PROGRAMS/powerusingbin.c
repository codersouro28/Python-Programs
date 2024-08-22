#include<stdio.h>

int main()
{
	int arr[50],n,p,j,res=1,i=0;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the power");
	scanf("%d",&p);
	while(p!=0)
	{
		arr[i++]=p%2;
		p/=2;
	}
	for(j=i-1;j>=0;j--)
	{
		if(arr[j]==1)
		res=res*res*n;
		else
		res=res*res;
	}
	printf("Result=%d",res);
	return 0;
}
