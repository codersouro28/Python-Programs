/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING PATTERN:
    Enter the number of lines:
    4
      4
    4 3 4
  4 3 2 3 4
4 3 2 1 2 3 4
  ....*/
  
  #include<stdio.h>
  int main()
  {
  	int i,j,n,k=1;
  	printf("\nEnter the number of lines:\n");
  	scanf("%d",&n);
  	
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
  }
  
