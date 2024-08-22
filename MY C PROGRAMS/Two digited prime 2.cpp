#include<stdio.h>
#include<math.h>
int isPrime(int );
int main()
{
	int f,i;
	printf("Two digited prime numbers are:\n");
	for(i=10;i<100;i++)
	{
		if(isPrime(i))
		printf("%d\t",i);
	}
}
int isPrime(int n)
{
int	i,p,f=1;
p=sqrt(n);
for(i=2;i<=p;i++)
{
	if(n%i==0)
	{
		f=0;
		break;
	}
}
    return f;
}


