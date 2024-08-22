//PROGRAM TO FIND THE TOTAL SALE OF A COMPANY


#include<stdio.h>

int main()
{
	int a[3][5],sales[3][5],tSale=0,GTotalSale=0,i,j;
	//accepting values for array
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter sales value of employee %d for month %d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	//printing array
		printf("\n-----MONTHLY SALES F0R EACH EMPLOYEE---------\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
{
	printf("%4d",a[i][j]);
	
}
printf("\n");
}
//FIND THE TOTAL SALE OF EACH EMPLOYEE     
    for(i=0;i<3;i++)
	{
		tSale=0;
		for(j=0;j<5;j++)
		{
			tSale=tSale+a[i][j];
    }
    printf("\n Total sales of employee %d is %d",i+1,tSale);
    GTotalSale+=tSale;
}
		//FIND THE TOTAL SALE OF EACH MONTH     
    for(j=0;j<5;j++)
	{
		tSale=0;
		for(i=0;i<3;i++)
		{
			tSale=tSale+a[i][j];
    }
    printf("\n Total sales of month %d is %d",j+1,tSale);
}
printf("\n Grand Total Sale = %d ",GTotalSale);
}
