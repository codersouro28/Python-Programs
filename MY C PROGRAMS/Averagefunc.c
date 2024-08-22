#include<stdio.h>
float average(int ,int ,int);           //function prototype declaration
void main()
{
int n1,n2,n3;
float ave;
printf("Enter three numbers:");
scanf("%d %d %d",&n1,&n2,&n3);
ave=average(n1,n2,n3);                  //calling function (Actual Paramter) 
printf("Average=%.2f",ave);             //printing only two places after decimal 

}

float average(int a,int b,int c)        //called function  (Formal Parameter)
{
	float avg=0.0;
	avg=(a+b+c)/3.0;
	return avg;                        //returning average to calling function
	
}
