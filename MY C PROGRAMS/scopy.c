#include<stdio.h>
void scopy(char t[], char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		t[i]=s[i];
	}
	t[i]='\0';
}
int scomp(char s1[], char s2[])
{
	int i;
	for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		break;
	}
  return (s1[i]-s2[i]);
}

void main()
{
	char source[30],target[30],String1[30]="Computer Application";
	printf("Enter any String:");
	gets(source);
	scopy(target,source);
	printf("NEW STRING: ");
	puts(target);
	if(scomp(source,String1)==0)
	puts("Strings are equal");
	else
		puts("Strings are not equal");
	
}

