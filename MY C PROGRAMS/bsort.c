//PROGRAM TO ILLUSTRATE BUBBLESORT.

void main()
{
	int a[10],n,i,j,temp;
	printf("Enter the number of terms:\n");
	scanf("%d",&n);
	//filling array
	for(i=0;i<n;i++)
	{
		printf("Enter the value for a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n---Unsorted array----\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	//sorting using bubblesort
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	printf("\n---Sorted array----\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);



}

