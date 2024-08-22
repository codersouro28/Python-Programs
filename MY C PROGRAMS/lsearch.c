#include<stdio.h>
int lSearch(int a[],int size,int k)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(a[i]==k)
		{
		return i;
     	}
    }
    return -1;
}

void main()
{
	int arr[10],i,x,pos;
	
	for(i=0;i<10;i++)
	{
		printf("Enter element for arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	
  printf("Enter the search key:");
  scanf("%d",&x);
  
  pos=lSearch(arr,10,x);
  if(pos!=-1)
  printf("Element is found at %d position",pos);
  else
  printf("Element is not found");
}
