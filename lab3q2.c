#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    printf("enter two numbers : ");
    scanf("%d %d",&a,&b);
    if (a%b == 0)
    {
        printf("%d is a factor of %d",b,a);
    }
    else if (b%a ==0 )
    {
        printf("%d is a factor of %d",a,b);
    }
    else
    {
        printf("they don't divide each other");
    }   
}