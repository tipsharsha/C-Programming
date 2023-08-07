#include <stdio.h>
#include <math.h>
int power(int n, int j, int k);
int main()
{
    int x, y, z;
    printf("give your numbers\t");
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", power(x, y, z));
    return 0;
}
int power(int n, int j, int k)
{
    int i, h = 1;
    for (i = 0; i < (j + k); i++)
    {
        h *= n;
    }

    return h;
}