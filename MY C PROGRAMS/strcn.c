#include<stdio.h>
#include<stdlib.h>
void scat(char s1[], char s2[])
{
	char *s3;
	int i,j;
	int sij=0;
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';j++);
	sij=i+j;	
	s1=(char*)realloc(s1,sij);
	
	for(j=0;s2[j]!='\0';j++)
	{
	  	s1[i++]=s2[j];
	}
	
}

void main()
{
	char *str1,*str2;
	int len1, len2;

	printf("Enter max length of 1st String: ");
	scanf("%d", &len1);
	printf("Enter max length of 2nd String: ");
	scanf("%d", &len2);

	str1 = (char*)malloc(len1+1);
	str2 = (char*)malloc(len2+1);

	printf("\nEnter Your 1st String: ");
	fflush(stdin);
	gets(str1);
	printf("Enter Your 2nd String: ");
	fflush(stdin);
	gets(str2);
	scat(str1,str2);
	printf("NEW STRING:%s",str1);
}

/*char *str1="Souradeep";
	char *str2="Maitra";*/
