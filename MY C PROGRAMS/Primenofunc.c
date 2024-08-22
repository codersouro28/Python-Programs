#include<stdio.h>
#include<math.h>

int isPrime(int no); //funtion prototype

void main()
{
	int n;    //to store the number given by user
	int p;    //to store the value returned by isPrime()
	
	printf("Enter a number:");
	scanf("%d",&n);     //taking input from user
	p=isPrime(n);    
	if(p==1)            //checking if the returned value of flag is 1
	printf("%d is Prime",n);
	else
	printf("%d is Not Prime",n);
}//end of main()

int isPrime(int no)   //funtion to check the number is prime or not using flag
{
	  int f=1,i;
	  int p=sqrt(no);  //storing square root of the number given by user using sqrt() function
	
	for(i=2;i<=p;i++)  //generating a loop from 2 - square of the number to reduce the comparisons
	{
		if(no%i==0)   
		{
		  f=0;       //if there are any factors between 2-p then the number is not prime.
		  break;
	    }
	}
	 return f;
}

/*
SAMPLE OUTPUT
Enter a number:3
3 is Prime
Enter a number:6
6 is Not Prime

*/

