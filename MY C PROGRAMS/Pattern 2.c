/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING PATTERN:
  A
  AB
  ABC
  ABCD
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
  		printf("%c ",(64+j));
  		
  		printf("\n");
	  }
  }
  
