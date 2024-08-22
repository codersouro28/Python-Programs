//PROGRAM TO COUNT THE NUMBER OF WORDS IN A STRING.

#include<stdio.h>
#include<string.h>
void main()
{
	int space=0,len,i;char c=' ',st[100];
	printf("Enter a string:\n");
	gets(st);
	len=strlen(st);
	for(i=0;i<len;i++)
	{
		c=st[i];
		if(c==' ')
		space++;
	}
	printf("Number of words:%d",(space+1));
}
