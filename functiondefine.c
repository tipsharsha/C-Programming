#include <stdio.h>
float square(float x)
// this is returning a value so this can't use a void as arg//
{
    float y;
    y=x*x;
    return y;
}
int main()
{
    float a,b;
    printf("\n enter");
    scanf("%f", &a);
    b = square(a);
    printf("\n %f", b);
    return 0;
}