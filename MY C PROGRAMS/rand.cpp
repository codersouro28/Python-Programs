#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int ch,i,random; 
		srand(time(NULL));
		random=rand()%10 + 1;
		printf("%d",random);
}
