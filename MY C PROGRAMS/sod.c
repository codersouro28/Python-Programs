#include <stdio.h>

int main(void) {
	int s=0,r;
	long long int t,n;
	scanf("%lld",&t);
	while(t--)
	{
	    s=0;
	    scanf("%lld",&n);
	    while(n!=0)
	    {
	        r=n%10;
	        s=s+r;
	        n=n/10;
	    }
	    printf("%d\n",s);
	}
	return 0;
}


