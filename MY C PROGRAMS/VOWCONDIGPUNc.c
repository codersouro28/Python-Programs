//PROGRAM TO FIND THE NUMBER OF VOWELS CONSONATS DIGITS AND PUNCTUATION MARKS IN A STRING.

#include<stdio.h>
#include<String.h>
#include<ctype.h>
void main()
{
	char st[100],c=' ';
	int l=0,i,v=0,con=0,dig=0,p=0;
	printf("Enter the String:");
	gets(st);
	l=strlen(st);
	for(i=0;i<l;i++)
	{
		c=st[i];
		if(isalnum(c))
		{
			if(isalpha(c))
			{
			if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
			v++;
		    else
		    con++;
		    }
		else
		dig++;
	}
	else
	if(ispunct(c))
	p++;
	c=' ';
}
printf("NUMBER OF VOWELS: %d\n",v);
printf("NUMBER OF CONSONANTS: %d\n",con);
printf("NUMBER OF DIGITS: %d\n",dig);
printf("NUMBER OF PUNCTUATION MARKS: %d",p);

}
