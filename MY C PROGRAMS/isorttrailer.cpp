//PROGRAM TO ILLUSTRATE insertion

#include<stdio.h>
int main()
{
	int a[10],i,j,pos,n,temp,ptr,nu;
	printf("ENter the number of elements:");
	scanf("%d",&n);
	
	//filling array
	for(i=0;i<n;i++)
	{
		printf("Enter the value for a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	//displaying unsorted array
	printf("\n----Unsorted Array---\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
  
    //sorting array using selection sort technique
    for(i=0;i<(n-1);i++)
    {
    	pos=i;
    	for(j=i+1;j<n;j++)
    	{
    		if(a[j]<a[pos])
    		pos=j;
		}
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
	//diplaying sorted array
printf("\n-----SORTED ARRAY-----\n");
for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter a number:");
	scanf("%d",&nu);
	a[i]=nu;
	//finding the point where nu is to be inserted
for(i=0;i<n;i++)
{
	if(a[i]>nu)
	{
		ptr=i;
		break;
	}
}
//inserting the number.
for(j=n-1;j>=ptr;j--)
a[j+1]=a[j];
a[ptr]=nu;
	//diplaying sorted array
printf("\n-----SORTED ARRAY-----\n");
for(i=0;i<(n+1);i++)
	{
		printf("%d\t",a[i]);
	}

}
