//PROGRAM TO FIND THE NET PAYABLE AMOUNT
#include<stdio.h>
int main()
{
	int d,net,p;
	printf("Enter the Purchase Amount: ");
	scanf("%f",&p);
	if(p>5000)
	d=p*0.1;
	else 
	d=0;
	net=p-d;
	printf("Net Payable Amount=%f",net);
	return 0;
}

