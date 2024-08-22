//PROGRAM TO ILLUSTRATE INSERTION SORT.

#include<stdio.h>

void main()
{
	int a[10],n,ptr,temp,i;
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
	
}
