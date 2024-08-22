//PROGRAM TO STORE +VE 0 -VE IN SAME ARRAY.

#include<stdio.h>
void main()
{
	int a[10],b[10],i,j=0;
	
	for(i=0;i<10;i++)
	{
		printf("Enter the element for a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("---Array Elements---\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
		b[j++]=a[i];
	}
	for(i=0;i<10;i++)
	{
		if(a[i]==0)
		b[j++]=a[i];
	}
	for(i=0;i<10;i++)
	{
		if(a[i]<0)
		b[j++]=a[i];
	}
	printf("\n---New Array---\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",b[i]);
	}
	
}
