#include <stdio.h>
int main()
{
    int i, j, rows;
    scanf("%d", &rows);
    for (i = 1; i < 2 * rows + 1; i++)
    {
        for (j = i; j < 2 * rows + 1; j++)
        {
            printf(" ");
        }
        for (j = 1; j < 2 * i; j++)
        {
            printf("*");
        }
        for (j = i; j < 4 * rows - i + 1; j++)
        {
            printf(" ");
        }
        for (j = 1; j < 2 * i; j++)
        {
            printf("*");
        }
        for (j = i; j < 4 * rows - i + 1; j++)
        {
            printf(" ");
        }
        for (j = 1; j < 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}