/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING PATTERN:
      4
    4 3 4
  4 3 2 3 4
4 3 2 1 2 3 4
  4 3 2 3 4
    4 3 4
      4
  ....*/
  
  #include<stdio.h>
  int main()
  {
  	int i,j,n;
  	printf("Enter the number of lines:\n");
  	scanf("%d",&n);
  	printf("The Pattern is:\n");
  	for(i=n;i>=1;i--)
  	{  	
  		for(j=1;j<=(i-1);j++)
  		printf("  ");
  		
		for(j=n;j>=i;j--)		  
  		printf("%d ",j);
  		
  		for(j=i+1;j<=n;j++)
  		printf("%d ",j);
  		printf("\n");
	  }
	  
	  for(i=1;i<=(n-1);i++)
	  {
	  	for(j=1;j<=i;j++)
	  	printf("  ");
	  	
	  	for(j=n;j>=(i+1);j--)
	  	printf("%d ",j);
	  	
	  	for(j=i+2;j<=n;j++)
	  	printf("%d ",j);
	  	
	  	printf("\n");
		  }
	  }
  
  
