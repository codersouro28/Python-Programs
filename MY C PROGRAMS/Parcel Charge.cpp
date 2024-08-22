//PROGRAM TO CALCULATE THE CHARGES OF A PARCEL.
#include<stdio.h>
int main()
{
	int wt,chrg,times,net,rem;
	printf("Enter the weight of the parcel: ");
	scanf("%d",&wt);
	if(wt<=20)
	chrg=25;
	else
	{
		net=wt-20;
		times=net/10;
		rem=net%10;
	    if(rem!=0)
	    times=times+1;
	    chrg=25+times*5;
	}
	printf("Charge=%d",chrg);
	
}
