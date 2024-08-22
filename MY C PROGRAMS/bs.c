#include<stdio.h>

void iSort(int a[],int n)
{
	int i,ptr,temp;
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
}
	int bSearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
}
    void main()
    {
    	int ar[20],i,s,ele,val;
    	
    	printf("Enter the number of elements:");
    	scanf("%d",&s);
    	
    	for(i=0;i<s;i++)
    	{
    		printf("Enter Element for ar[%d]:",i);
    		scanf("%d",&ar[i]);
		}
		printf("\n");
		
		iSort(ar,s);
		printf("----SORTED ARRAY-----\t");
		for(i=0;i<s;i++)
		{
			printf("%d\t",ar[i]);
		}
		
		printf("\n Enter the element to be searched:");
		scanf("%d",&ele);
		
		val=bSearch(ar,s,ele);
		if(val != -1)
			printf("%d is present at ar[%d]",ele,val);
		else
			printf("WRONG INPUT!!PLEASE ENTER AGAIN");	
	}


