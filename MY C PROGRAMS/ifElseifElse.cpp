/*
	iii) if-else if-else:

if(condition 1){
 	//body of if
}
else if(condtion 2){
	//body of else if-1
}

else if(condtion 3){
	//body of else if-2
}

else if(condtion 4){
	//body of else if-3
}

else if(condtion n){
	//body of else if-(n-1)
}

else{
	//body of else (requirement based on problem,not always mandatory)
}
*/

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
		printf("%d(a) is Largest",a);
	else if(b>c)
		printf("%d(b) is Largest",b);
	else
		printf("%d(c) is Largest",c);
}




/*9 8 10

9>8 && 9>10 
0

8>10
0

10
*/


