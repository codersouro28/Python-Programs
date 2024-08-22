#include<stdio.h>
int main()
{
	int ch;
	float c,f;
	
	printf("Enter 1-> C->F"
	"\nEnter 2-> F->C\n");
	
	printf("Enter your choice: ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Enter the temperature in celcius: ");
			scanf("%f", &c);
			f= (c*1.8) + 32;
			printf("\nFarenheit Temperature %.2f",f);
			break;
		
		default:
			printf("\nWrong choice");
			
		case 2:
			printf("\nEnter the temperature in farenheit: ");
			scanf("%f", &f);
			c=(f-32)/1.8;
			printf("\nCelcius Temperature %.2f",c);
			break;
		
	}
			
}

