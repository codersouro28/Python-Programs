#include <stdio.h>

int main(void) 
{
    int x;
    float y;
    float balance=0.0;
    scanf("%d %f",&x,&y);
    if((x>=0 && x<=2000) && (y>=0.00 && y<=2000.00))
    {
        if(x%5==0 && y-(x+0.50)>=0)
        {
            balance=y-(x+0.50);
            printf("%.2f",balance);
        }
        else
        printf("%.2f",y);
    }
	return 0;
}

