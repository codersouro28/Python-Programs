#include<stdio.h>
void print(int n)
{
 if (n == 0)
 return;
 else
 {
 print(n/2);
 printf("%d", n%2);
}
}
void main()
{
	print(12);
}
