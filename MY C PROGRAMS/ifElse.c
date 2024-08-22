/*
ii) if - else:

if(condition){
	//body of if
}
else     //(condition is false)
{
	//body of else
}
*/


#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%2 == 0)
	{
		printf("%d is Even",n);
	}
	else //(n%2 != 0)
	{
		printf("%d is odd",n);
	}
}






