#include <stdio.h>
int hexa(int dec);
int main()
{
    int dec,num;
    printf("give your decimal under 10^12");
    scanf("%d", &num);
    hexa(num);
return 0;
}
int hexa(int dec)
{    
    char hex[30];
    int  i, j, rem;
    for (i = 0; dec != 0; i++)
    {
        rem = dec % 16;
        dec /= 16;
        printf("%d \n", rem);
        switch (rem)
        {
        case 0:
            hex[i] = '0';
            break;
        case 1:
            hex[i] = '1';
            break;
        case 2:
            hex[i] = '2';
            break;
        case 3:
            hex[i] = '3';
            break;
        case 4:
            hex[i] = '4';
            break;
        case 5:
            hex[i] = '5';
            break;
        case 6:
            hex[i] = '6';
            break;
        case 7:
            hex[i] = '7';
            break;
        case 8:
            hex[i] = '8';
            break;
        case 9:
            hex[i] = '9';
            break;
        case 10:
            hex[i] = 'A';
            break;
        case 11:
            hex[i] = 'B';
            break;
        case 12:
            hex[i] = 'C';
            break;
        case 13:
            hex[i] = 'D';
            break;
        case 14:
            hex[i] = 'E';
            break;
        case 15:
            hex[i] = 'F';
            break;
        }
    }
    for (j = i - 1; j > -1; j--)
    {
        printf("%c", hex[j]);
    }
}