//PROGRAM TO FIND THE LARGEST NUMBER IN A ARRAY


#include<stdio.h>

int main()
{
	int a[3][4],max=0,i,j;
	//accepting values for array
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter value for a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//printing array
		printf("\nArray\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
{
	printf("%2d",a[i][j]);
	
}
printf("\n");
}
//FIND THE MAXIMUM
    max=a[0][0];      
    for(i=0;i<3;i++)
	{
		
		for(j=0;j<4;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
    
	}
}
printf("Maximum=%d",max);

}
