/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING PATTERN:
       1
      21
     321
    4321
  ....*/
  
  #include<stdio.h>
  void main()
  {
  	int i,j,n;
  	printf("\nEnter the number of lines:\n");
  	scanf("%d",&n);
  	
  	for(i=1;i<=n;i++)
  	{  	
  		for(j=1;j<=(n-i);j++)
  		printf("  ");
  		
		  for(j=i;j>=1;j--)
  		printf("%d ",j);
  		
  		printf("\n");
	  }
  }
  
