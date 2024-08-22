#include<stdio.h>
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
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		printf("Enter element for arr[%d]",i);
		scanf("%d",&arr[i]);
	}
  
   bubbleSort(arr,10);
   
   printf("ARRAY AFTER SORTING\n");
   	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}

}

