#include<stdio.h>
int sOD(int n);
int revNum(int n);
int nOD(int n);

int main()
{
	int nd,sum,rev,a;
	printf("Enter the no.: ");
	scanf("%d",&a);
	nd=nOD(a);
	rev=revNum(a);
	sum=sOD(a);
	printf("No. of Digits=%d\n",nd);
	printf("Sum of Digits=%d\n",sum);
	printf("Reverse of the no.=%d\n",rev);
}
int nOD(int n)
{
	int ctr=0;
	while(n>0)
	{
		ctr++;
		n=n/10;
	}
	return ctr;
}

int revNum(int n)
{
	int rev=0;
		while(n>0)
	{
		int d=n%10;
		rev=rev*10+d;
		n=n/10;
}
return rev;
}


int sOD(int n)
{
	int sum=0;
		while(n>0)
	{
		int d=n%10;
		sum=sum+d;
		n=n/10;
}
return sum;
}
