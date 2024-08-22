#include<stdio.h>

struct marks
{
	int sub[3];
	int total;
}stud[3],t[3];

void main()
{
	int i,j;
	
	for(i=0;i<3;i++)
	{   
	    stud[i].total=0;
		printf("Enter marks for stud[%d]\n",i+1);
     
     for(j=0;j<3;j++)
     {
     	printf("Enter marks in sub[%d]\n",j+1);
     	scanf("%d",&stud[i].sub[j]);
     	stud[i].total+=stud[i].sub[j];
	 }
	 t[i].total=stud[i].total;
	}
 printf("\tStudent\t\tTotal\n");
 for(i=0;i<3;i++)
 {
 	printf("\tstudent[%d]\t\t\t%d\n",i+1,t[i].total);
 }

}
