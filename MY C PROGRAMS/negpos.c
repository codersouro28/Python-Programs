//PROGRAM TO SPLIT +VE AND -VE NUMBERS INTO 2 DIFFERENT ARRAYS.

#include<stdio.h>
#define s 10
void main()
{
	int a[s],p[s],n[5],i,j=0,k=0;
	//filling array
	for(i=0;i<s;i++)
	{
		printf("Enter array element for a[%d]",i);
		scanf("%d",&a[i]);
	}
	//displaying array elements
	printf("Array elements:\n");
	for(i=0;i<s;i++)
	{
		printf("\t%d",a[i]);
	}
	//seperating elements
	for(i=0;i<s;i++)
	{
		if(a[i]<0)
		{
		n[j]=a[i];
		j++;
	}
		else{
		
		p[k]=a[i];
		k++;
}
}
	printf("\nPositive elements:\n");
	for(i=0;i<k;i++)
	{
	printf("\t%d",p[i]);
    }
    printf("\nNegative elements:\n");
	for(i=0;i<j;i++)
	{
	printf("\t%d",n[i]);
    }
    
    
	
}
