//PROGRAM TO FIND THE TRANSPOSE OF A MATRIX.


#include<stdio.h>

int main()
{
	int a[4][4],b[4][4],i,j;
	//accepting values for array
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter value for a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//printing array
		printf("\n------ORIIGINAL Array------\n");
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
{
	printf("%4d",a[i][j]);
	
}
printf("\n");
}      
    for(i=0;i<4;i++)
	{
		
		for(j=0;j<4;j++)
		{
			b[i][j]=a[j][i];
    
	}
}
	//printing array
		printf("\n------TRANSPOSE Array------\n");
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
{
	printf("%4d",b[i][j]);
	
}
printf("\n");
}      


}
