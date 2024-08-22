#include<stdio.h>
#include<stdlib.h>
char *scat(char s1[], char s2[])
{
	char *s3;
	int i,j;
	int sij=0;
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';j++);
	sij=i+j;	
	s3=(char*)malloc((sizeof(char)*sij)+1);
	
	for(i=0;s1[i]!='\0';i++)
	{
	  	s3[i]=s1[i];
	}
	
		for(j=0;s2[j]!='\0';j++)
	{
	  	s3[i++]=s2[j];
	}
	s3[i]='\0';
	return s3;
}

void main()
{
	char *str1,*str2;
	printf("Enter First String: ");
	scanf("%s",str1);
	printf("Enter Second String: ");
	scanf("%s",str2);
	scat(str1,str2);
	printf("NEW STRING:%s",scat(str1,str2));
}
