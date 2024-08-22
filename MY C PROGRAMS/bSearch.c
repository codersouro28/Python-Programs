#include<stdio.h>
int bSearch(int a[],int size,int x)
{
	int i,mid,lb=0,ub=size-1;
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(a[mid]==x)
		{
		return mid;
	    }
		else if(x>a[mid])
		lb=mid+1;
		else
	    ub=mid-1;
	}
	return -1;
}
void bubbleSort(int a[],int size)
{
	int i,j,t;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
void main()
{
	int arr[10],i,x,pos;
	
	for(i=0;i<10;i++)
	{
		printf("Enter element for arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,10);
	
	printf("SORTED ARRAY---\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
  printf("\nEnter the search key:");
  scanf("%d",&x);
  
  pos=bSearch(arr,10,x);
  if(pos!=-1)
  printf("%d is found at arr[%d]",x,pos);
  else
  printf("Element is not found");
}
