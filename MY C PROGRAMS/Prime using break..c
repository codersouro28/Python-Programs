#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,p,f=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	p=sqrt(n);
	for(i=2;i<=p;i++)
	{
		if(n%i==0)
		{
		f=1;
		break;
	    }
    }
    if(f!=1)
    printf("%d is a Prime Number",n);
    else
    printf("%d is not a Prime Number",n);
}
