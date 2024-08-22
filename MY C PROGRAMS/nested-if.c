/*iv) nested if:

if(condition)
{
	if(condition)
	{
		//body of inner-if
	}	

	//body of outer-if
}*/

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("%d(a) is largest",a);
		else  //c>a
			printf("%d(c) is largest",c);
		}
	else  //b>a
	{
		if(b>c)
			printf("%d(b) is largest",b);
		else
			printf("%d(c) is largest",c);
		}	
}
