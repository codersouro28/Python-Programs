#include<stdio.h>
int fibonacci(int num){
    if(num==0 || num==1)
        return num;
        else
        return fibonacci(num-1)+fibonacci(num-2);
}
int fibo(int num){
    int num1=0,num2=1,c=0,count=0;
    for(int i=0;i<num ;  i++){
        num1=num2;
        num2=c;
        c=num1+num2;
    }
    return c;
}
int main(){
    int num;
    printf("Enter The range: ");
    scanf("%d",&num);
    printf("\n The Fibonacci Series Upto N terms is: \n");
    for(int i=0;i<num;i++)
    printf("%d ",fibo(i));
    printf("\n The Fibonacci Series Upto N is: \n");
    for(int i=0;i<num;i++)
    printf("%d ",fibonacci(i));
    return 0;
}
