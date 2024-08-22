//PROGRAM TO FIND THE AVERAGE OF ELEMENTS IN A MATRIX.


#include<stdio.h>

int main()
{
	int a[3][5],sum=0,i,j;
	float avg=0.0;
	//accepting values for array
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter value for a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//printing array
		printf("\nArray\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
{
	printf("%4d",a[i][j]);
	
}
printf("\n");
}
//FIND THE SUM     
    for(i=0;i<3;i++)
	{
		
		for(j=0;j<5;j++)
		{
			sum=sum+a[i][j];
    
	}
}
avg=sum/15.0;                 //3*5 elements
printf("Avg=%.2f",avg);

}
