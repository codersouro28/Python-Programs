//PROGRAM TO FIND THE LARGEST DIFFERENCE

#include<stdio.h>
void main()
{
	int a[10],i,max=0,min=9;
	//filling array
	for(i=0;i<5;i++)
	{
		printf("Enter elements for a[%d]",i);
		scanf("%d",&a[i]);
	}
	//displaying array elements
	printf("Array elements:\n");
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
		
	}
	printf("\nMaximum difference=%d",(max-min));
}
