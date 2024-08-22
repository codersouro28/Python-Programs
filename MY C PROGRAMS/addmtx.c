//PROGRAM TO FIND THE ADDITION OF TWO MATRIXES


#include<stdio.h>

int main()
{
	int a[4][4],b[4][4],c[4][4],max=0,i,j;
	//accepting values for array a[][]
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter value for a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	//accepting values for array b[][]
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter value for b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	//printing array a[][]
		printf("\n----Array----\n");
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
{
	printf("%4d",a[i][j]);
	
}
printf("\n");
}
	//printing array b[][]
		printf("\n-------Array------\n");
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
{
	printf("%4d",b[i][j]);
	
}
printf("\n");
}

//FIND THE ADDITION OF TWO ARRAYS      
    for(i=0;i<4;i++)
	{
		
		for(j=0;j<4;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
    
	}
}

//PRINTING THE RESULATANT MATRIX C[][]
		printf("\n----RESULTANT ARRAY---\n");
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
{
	printf("%4d",c[i][j]);
	
}
printf("\n");
}
}
