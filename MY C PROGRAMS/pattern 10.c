/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING PATTERN:
       4321
        432
         43
          4
  ....*/
  
  #include<stdio.h>
  int main()
  {
  	int i,j,n,k=1;
  	printf("\nEnter the number of lines:\n");
  	scanf("%d",&n);
  	
  	for(i=n;i>=1;i--)
  	{  	
  		for(j=1;j<=(n-i);j++)
  		printf(" ");
  		
		for(j=n;j>=k;j--)		  
  		printf("%d",j);
  		k++;
  		printf("\n");
	  }
  }
  
