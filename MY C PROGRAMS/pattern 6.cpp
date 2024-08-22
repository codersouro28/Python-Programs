/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING PATTERN:
                *
             *  *  *
          *  *  *  *  *
       *  *  *  *  *  *  *
    *  *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *  *  *
  ....*/
  
  #include<stdio.h>
  int main()
  {
  	int i,j,n,c;
  	printf("\nEnter the number of lines:\n");
  	scanf("%d",&n);
  	
  	for(i=1,c=1;c<=n;c++,i+=2)
  	{  	
  		for(j=1;j<=(n-c);j++)
  		printf("   ");
  		
		  for(j=i;j>=1;j--)
  		printf(" * ");
  		
  		printf("\n");
	  }
  }
  
