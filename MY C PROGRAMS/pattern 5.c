/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING PATTERN:
       4
      43
     432
    4321
  ....*/
  
  #include<stdio.h>
  void main()
  {
  	int i,j,n;
  	printf("\nEnter the number of lines:\n");
  	scanf("%d",&n);
  	
  	for(i=n;i>=1;i--)
  	{  	
	    j=i;
  		while(j!=1)
  		{
  			printf("  ");
  			j--;
		  }
  		
		  for(j=n;j>=i;j--)
  		printf("%d ",j);
  		
  		printf("\n");
	  }
  }
  
