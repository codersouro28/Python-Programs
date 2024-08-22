//PROGRAM TO SEARCH AN ELEMENT USING BINARY SEARCH

#include<stdio.h>

void main()
{
	int a[10],n,ptr,temp,i,lb,ub,x,mid=0,f=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	//filling array
	for(i=0;i<n;i++)
	{
		printf("Enter element for a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n----Unsorted array-------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	//sorting using insertion sort
	for(i=1;i<n;i++)
	{
		temp=a[i],ptr=i-1;
		while(a[ptr]>temp&&ptr>=0)
		{
			a[ptr+1]=a[ptr];
			ptr--;
		}
		a[ptr+1]=temp;
	}
	printf("\n----Sorted array-------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	



	
	printf("\nEnter the Search Key:");
	scanf("%d",&x);
	
	lb=0,ub=n-1;

while(lb<=ub)
{
	mid=(lb+ub)/2;    //(lowerbound+upperbound/2)
    if(a[mid]==x)
    {
    	f=1;
    	break;
	}
	else
	if(x>a[mid])
	lb=mid+1;
	else
	ub=mid-1;
}
if(f==1)
printf("%d is Present at location %d",x,mid+1);
else
printf("%d is Absent",x);
}






