/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING PATTERN:
       12345
        2345
         345
          45
           5
  ....*/
  
  #include<stdio.h>
  int main()
  {
  	int i,j,n;
  	printf("\nEnter the number of lines:\n");
  	scanf("%d",&n);
  	for(i=1;i<=n;i++)
  	{ 
  	for(j=1;j<=(i-1);j++)
  	printf(" ");
	  j=i; 	
  	  for(;j<=n;j++)
  		printf("%d",j);
  		printf("\n");
	  }
  }
  
