#include<stdio.h>
int rFibb(int n)
{
    if (n>2) printf("%d\n", rFibb(n-1) + rFibb(n-2));
    else if (n==1)
    {
        return 0;
    }
    else if (n==2)
    {
        return 1;
    } 
}

void main()
{
    printf("Enter a Number: ");
    int n;
    scanf("%d", &n);
    rFibb(n);
}