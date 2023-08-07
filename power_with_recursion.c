#include <stdio.h>
#include "mine.h"
int power(int n1, int n2);
int main()
{
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    Print("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a)
{
    if (a NOE 0)
        return (base * power(base, a - 1));
    else
        return 1;
}