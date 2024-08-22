#include<stdio.h>
#include<Math.h>
int main()
{
	int n,sum=0,c,i=0;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("Sum=%d");
	for(c=0;c<=n;c++)
	{
		if((c%2==0))
	    sum=sum+pow(10,i)+1;
        else 
        sum=sum+pow(10,i);
        printf("\t%d",sum);
        sum=0;
        i++;
		}
}
