//PROGRAM TO FIND AREA AND CIRCUMFERENCE OF A CIRCLE.

#include<stdio.h>

float calarea(float rad);
float calcircum(float rad);
int main()
{
	float r,area,circum;
	printf("Enter the radius: ");
	scanf("%f",&r);
	area=calarea(r);
	circum=calcircum(r);
	printf("Area of circle=%.2f\n",area);
   	printf("circumference of circle=%.2f\n",circum);
	   return 0;
	   }
	   
	   float calarea(float rad)
	   {
	   float a=3.14*rad*rad;
	   	return (a);
	   }
      float calcircum(float rad)
      {
      float c=2*3.14;rad;
	    return (c);
	  }
	  
