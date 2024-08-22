//PROGRAM TO PRINT THREE DIGITED ARMSTRONG NUMBERS

#include<stdio.h>
#include<Math.h>
int isArmstrong(int n);
int main()
{
int i;
printf("Three-Digited Armstrong Numbers:\n");
for(i=100;i<=999;i++)
{
	 if(isArmstrong(i)==1)
	 printf("%d\t",i);
	}	
return 0;
}
int isArmstrong(int n)
{
	int s=0,r,temp;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		s=s+pow(r,3);
		n=n/10;
	}
	if(temp==s)
	return 1;
	else
	return 0;
}
