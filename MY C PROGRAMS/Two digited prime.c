#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,lim,p,f=0;
	printf("Two digited prime numbers are:\n");
	for(lim=10;lim<100;lim++)
	{
		n=lim,f=0,p=sqrt(n);
	for(i=2;i<=p;i++)
	{
		if(n%i==0)
		{
		f=1;
		break;
	    }
    }
    if(f!=1)
    printf("%d\t",n);
}
}
