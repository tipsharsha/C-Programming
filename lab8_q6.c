#include <stdio.h>
#include <math.h>

int main()
{
    long long n1 = 0, n2 = 0, carry = 0, new_num = 0, sum = 0;
    printf("enter two binary numbers : \n");
    scanf("%Ld", &n1);
    scanf("%Ld", &n2);

    int i = 0;
    while ((n1 != 0) && (n2 != 0))
    {
        if ((n1 % 10 == 0) && (n2 % 10 == 0) && (carry == 0))
        {
            sum = 0;
            carry = 0;
        }
        else if ((n1 % 10 == 0) && (n2 % 10 == 1) && (carry == 0))
        {
            sum = 1;
            carry = 0;
        }
        else if ((n1 % 10 == 1) && (n2 % 10 == 0) && (carry == 0))
        {
            sum = 1;
            carry = 0;
        }
        else if ((n1 % 10 == 1) && (n2 % 10 == 1) && (carry == 0))
        {
            sum = 0;
            carry = 1;
        }
        else if ((n1 % 10 == 0) && (n2 % 10 == 0) && (carry == 1))
        {
            sum = 1;
            carry = 0;
        }
        else if ((n1 % 10 == 0) && (n2 % 10 == 1) && (carry == 1))
        {
            sum = 0;
            carry = 1;
        }
        else if ((n1 % 10 == 1) && (n2 % 10 == 0) && (carry == 1))
        {
            sum = 0;
            carry = 1;
        }
        else if ((n1 % 10 == 1) && (n2 % 10 == 1) && (carry == 1))
        {
            sum = 1;
            carry = 1;
        }
        new_num += sum * pow(10, i);
        i++;
        n1 /= 10;
        n2 /= 10;
    }
    if (carry == 1)
        new_num += pow(10, i);
    printf("%Ld\n", new_num);
    return 0;
}