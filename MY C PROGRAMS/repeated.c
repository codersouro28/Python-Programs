//PROGRAM TO FIND THE TOTAL NUMBER OF DUPLICATE ELEMENTS IN AN ARRAY

#include<stdio.h>
void main()
{
	int a[10],b[10],k=0,i,j,n,c=0;
	printf("Enter the number of elemnts:");
	scanf("%d",&n);
	//filling array
	for(i=0;i<n;i++)
	{
		printf("Enter the element fo a[%d]",i);
		scanf("%d",&a[i]);
	}
	//displaying array
	printf("\n--Array elements--\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{   //checking for equality
			a[j]=-1;     
			k++;
			break;
			}      //updating counter variable
		}
	}
}    
printf("\nTotal number of repeated elements are:%d\n",k);
	}
	
  
