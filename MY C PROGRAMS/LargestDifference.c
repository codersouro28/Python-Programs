#include<stdio.h>
int lardiff(int arr[],int size)
{
	int max,min,i;
	max=arr[0],min=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		else
		if(arr[i]<min)
		min=arr[i];
	}
	/*printf("\nMamimum element=%d\n",max);
    printf("Minimum element=%d\n",min);*/
	return (max-min);
}

void main()
{
	int a[10],i;
	
	for(i=0;i<10;i++)
	{
		printf("Enter element for a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	printf("Largest difference=%d",lardiff(a,10));
}
