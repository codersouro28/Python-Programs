/*i) if- statement : 

if (condition){
	//body of if
}*/


#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%2 == 0) 
		printf("%d is Even",n);
	return 0;
}




