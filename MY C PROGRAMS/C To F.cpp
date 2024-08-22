//PROGRAM TO CONVERT C TO F.

#include<stdio.h>
float conv(float tc);
int main()
{
	float c,f;
	printf("Enter the temperature in Celcius: ");
	scanf("%f",&c);
	f=conv(c);
	printf("Temperature in Farenheit= %.2f",f);
	return 0;
}
	
float conv(float tc)
{
	int temp=(9*tc+160)/5;
	return (temp);
}
