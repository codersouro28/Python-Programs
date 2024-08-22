#include"stdio.h"


int square(int a)
{
	int s=1;
	s=a*a;
	printf("Hello \n");
	return s;  //to return the result to calling function
}
int main()
{
	int sq;
	sq=square(3);
	printf("Square=%d",sq);
	return 0;  //to indicate successful termination of program
}


/*f(a) = a*a;

f(3)=3*3=9 */
