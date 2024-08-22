#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void mystrcat(char *str1, char *str2){
	int str1_len, str2_len, new_len;
	int i, j;

	for(i=0; str1[i] != '\0'; i++);
	str1_len = i;
	for(i=0; str2[i] != '\0'; i++);
	str2_len = i;

	new_len = str1_len + str2_len + 1;
	str1 = (char*)realloc(str1, new_len);
	for(i=str1_len, j=0; i<new_len; i++, j++){
		str1[i] = str2[j];
	}
	str1[i] = '\0';
}

void main(){
	char *str1, *str2;
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

	printf("\n\n\"%s\" + \"%s\" = ", str1, str2);
	mystrcat(str1, str2);
	puts(str1);

	getch();
}
