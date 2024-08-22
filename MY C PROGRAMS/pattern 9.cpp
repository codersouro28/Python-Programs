/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING PATTERN:
       1234
        123
         12
          1
  ....*/
  
  #include<stdio.h>
  int main()
  {
  	int i,j,n;
  	printf("\nEnter the number of lines:\n");
  	scanf("%d",&n);
  	
  	for(i=n;i>=1;i--)
  	{  	
  		for(j=1;j<=(n-i);j++)
  		printf(" ");
  		
		  for(j=1;j<=i;j++)
  		printf("%d",j);
  		
  		printf("\n");
	  }
  }
  
