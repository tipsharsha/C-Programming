#include <stdio.h>
#include <math.h>

int main()
{
    int bing, real=0, rem,temp,count;
    scanf("%d", &bing);
    temp = bing;
    count = 0;
    while (bing > 0)
    {
        rem = bing%10;
        real += rem * pow(2,count) ;
        bing /= 10;
        count++;
    }
    printf("for the %d binary number the number is %d", temp, real);
}