#include<stdio.h>
int main()
{
    int n,a,b,c;
    a=0;
    b= 1;
    printf("Enter no of terms:");
    scanf("%d",&n);
    printf("%d\t",a);
    printf("%d\t",b);
    while(c<n)
    {
        c = a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}
