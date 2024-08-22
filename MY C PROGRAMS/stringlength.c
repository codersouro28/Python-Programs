#include<stdio.h>
int slength(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}

void main()
{
	char s[30];
	printf("Enter the String:");
	gets(s);
	printf("Length of the String:%d",slength(s));
}
