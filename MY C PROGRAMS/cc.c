#include<stdio.h>
#include<stdlib.h>
	int main()
	{
		int t,n,a,b,i,ac,bc;
		char *s;
		int sum=0;
		scanf("%d",&t);
		while(t--)
		{
		    scanf("%d %d %d",&n,&a,&b);
		    s=(char * )malloc(n*sizeof(char));
		    ac=0,bc=0;
		    for(i=0;i<n;i++)
		    {
		        scanf("%c",&s[i]);
		    }
             
             for(i=0;i<n;i++)
		    {
		        if(s[i] == '0')
		            ac+=1;
		        if(s[i]== '1')
		           bc+=1;
		    }
		    sum=(a*ac)+(b*bc);
		    printf("%d\n",sum);
		}
		return 0;
	}


