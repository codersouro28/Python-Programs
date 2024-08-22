//PROGRAM TO CALCULATE THE TELEPHONE BILL.
#include<stdio.h>

int main()
{
	int c;
	float chg;
	printf("Enter the no. of calls:  ");
	scanf("%d",&c);
	if(c<=75)
	chg=250;
	else
	{
		if(c<=150)
		chg=250+(c-75)*0.80;
		else
		{
		if(c<=225)
		chg=250+75*0.80+(c-150)*1;
		else
		chg=250+75*0.80+75*1+(c-225)*1.20;
	}
	}
	printf("Charge=%f",chg);
	return 0;
}
