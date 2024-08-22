//PROGRAM TO CALCULATE THE COMMISSION OF A SALES-PERSON

#include<stdio.h>
int main()
{
	float sale,com;
	printf("Enter the sales value: ");
	scanf("%f",&sale);
	if(sale>5000)
	{
		com=sale*0.05;
	}
	else
	{
		if(sale<=7500)
		com=sale*0.01+100;
		else
		com=sale*0.15;
	}
	printf("Commission=%f",com);
}
