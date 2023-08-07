#include <stdio.h>
int main()
{
    int x = 10,y;
    y=(x++, printf("x=%d\n", x),++x,printf("x= %d\n", x++));
printf("%d %d", y, x);
return 0;
}