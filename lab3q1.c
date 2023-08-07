#include <stdio.h>
#include <math.h>
int main()
{
   float a,b,c,r,s;
   printf("give the legth of all sides : ");
   scanf("%f %f %f",&a,&b,&c);
   s = (a+b+c)/2.0;
   r = s*(s-a)*(s-b)*(s-c);
   if (a+b>c && a+c>b && b+c>a)
   {
       printf("area is %f", sqrt(r));
   }
}