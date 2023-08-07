#include <stdio.h>
#include <math.h>
void main()
{
    int d,sum,b,n,i;
    sum = 0 ;
    scanf("%d",&d);
    for(n=0;n<=5;n++)
    {
        b = pow(10,n);
        i = pow(10,n+1);
        sum = sum + (d / b) - 10*(d / i);
    }
    printf("sum %d", sum);    
}