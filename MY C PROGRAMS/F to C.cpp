//PROGRAM TO CONVERT F TO C.

#include<stdio.h>
float conv(float tf);
int main()
{
	float c,f;
	printf("Enter the temperature in Celcius: ");
	scanf("%f",&f);
	c=conv(f);
	printf("Temperature in Farenheit= %.2f",c);
	return 0;
}
	
float conv(float tf)
{
	int temp=(5*(tf-32)/9);
	return (temp);
}
