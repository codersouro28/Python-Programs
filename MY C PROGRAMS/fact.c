#include <stdio.h>

int main(void) {
	int t,n,i;
	long long int f=1;
	scanf("%d",&t);
	if(t>=1 && t<=100)
	{
	 while(t--)
	 {
	     
	     scanf("%d",&n);
	     if(n>=1 && n<=100)
	     {
	       f=1;
	       for(i=1;i<=n;i++)
	       f=f*i;
	       printf("%lld\n",f);
	      }
	 }
	}
	return 0;
}

