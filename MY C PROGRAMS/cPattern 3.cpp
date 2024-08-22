/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING PATTERN:
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
  1 2 3 2 1
    1 2 1
      1
  ....*/
  
  #include<stdio.h>
  int main()
  {
  	int i,j,n;
  	printf("Enter the number of lines:\n");
  	scanf("%d",&n);
  	printf("The pattern is: \n");
  	for(i=1;i<=n;i++)
  	{  	
  		for(j=1;j<=(n-i);j++)
  		printf("  ");
  		
		for(j=1;j<=i;j++)
  		printf("%d ",j);
  	    
  	    for(j=(i-1);j>=1;j--)
  		printf("%d ",j);
  		
  		printf("\n");
   }
  	
  		for(i=(n-1);i>=1;i--)
  		{
  			for(j=1;j<=(n-i);j++)
  			printf("  ");
  			
  			for(j=1;j<=i;j++)
  			printf("%d ",j);
  			
  			for(j=(i-1);j>=1;j--)  			
  			printf("%d ",j);
  			
  		    printf("\n");
	    }
	    return 0;
	  }
  
