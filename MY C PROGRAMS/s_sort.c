//PROGRAM TO ILLUSTRATE SELECTION SORT

#include<stdio.h>
void main()
{
	int a[10],i,j,pos,temp;
	
	//filling array
	for(i=0;i<10;i++)
	{
		printf("Enter the value for a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	//displaying unsorted array
	printf("\n----Unsorted Array---\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
  
    //sorting array using selection sort technique
    for(i=0;i<9;i++)
    {
    	pos=i;
    	for(j=i+1;j<10;j++)
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
for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}


}



