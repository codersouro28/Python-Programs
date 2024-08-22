#include <stdio.h>

int main(void) {
    
 int t,i,a,b,lcm,hcf,p=1;
 scanf("%d",&t);
 if(t>=1 && t<=1000)
 {
 for(i=1;i<=t;i++)
 {
 scanf("%d %d",&a,&b);
 if((a>=1&&a<=10000) && (b>=1 && b<=100000))
 {
 p=a*b;
 while(a!=b)
 {
     if(a>b)
     a=a-b;
     else
     b=b-a;
 }
hcf=a;
lcm=p/hcf;
printf("%d %d\n",lcm,hcf);
}
}
}
return 0;
}

