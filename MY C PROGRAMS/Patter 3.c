/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING PATTERN:
 1
 10
 10
 101
 1010
 .....
  ....*/
  
  #include<stdio.h>
  void main()
  {
  	int i,j,n;
  	printf("\nEnter the number of lines:\n");
  	scanf("%d",&n);
  	
  	for(i=1;i<=n;i++)
  	{
  		for(j=1;j<=i;j++)
  		printf("%d ",(j%2));
  		
  		printf("\n");
	  }
  }
  
