/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING PATTERN:
  *****
  *   *
  *   *
  *   *
  *****
  ....*/
  
  #include<stdio.h>
  int main()
  {
  	int i,j,n;
  	printf("Enter the nymber of lines:\n");
  	scanf("%d",&n);
  	printf("The pattern is:\n");
  	for(i=1;i<=n;i++)
  	{
  		for(j=1;j<=n;j++)
  		{
  			if(i==1||i==n||j==1||j==n)
  			printf("*");
  			else
  			printf(" ");
		  }
		  printf("\n");
	  }
  }
  
