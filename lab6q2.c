#include <stdio.h>
int main()
{
    int num, tmp, linecount;
    printf("Enter an integer between 1 and 50: ");
    scanf("%d", &num);
    tmp = num;
    if (num > 50)
        num = 50;
    linecount = 0;
    while (num > 0 && num > tmp/2)
    {
        if (linecount < 10)
            linecount++;
        else
        {
            printf("\n");
            linecount = 1;
        }
        if (num > tmp/2)
        printf("%3d", num--);
    }
    return 0;
}