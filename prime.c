#include<stdio.h>
int main()
{
    int i,x,flag;
    scanf("%d", &i);
    flag = 0;
    for (x=1;x<i;x++)
        {
        if (i%x == 0)
        {
         flag++;
        }
        }
    if (!flag)
    {
        printf("it is a prime");
    }    
    else 
    {
        printf("it is a composite");
    }
return 0;
}