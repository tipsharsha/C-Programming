#include<stdio.h>
#include<math.h>

void hexa(int num)
{
    int z=num;
    int temp=0;
    int flag=0;
    int rem;
    while (!flag)
    {
        z/=16;
        temp++;
        if (z==0) flag=1;
    }
    for (int i=temp; i>=1; i--)
    {
        rem = (i!=1)?(num/(int)pow(16, i-1))%16:num%16;
        switch (rem)
        {
        case 0:
            printf("%d", 0);
            break;
        case 1:
            printf("%d", 1);
            break;
        case 2:
            printf("%d", 2);
            break;
        case 3:
            printf("%d", 3);
            break;
        case 4:
            printf("%d", 4);
            break;
        case 5:
            printf("%d", 5);
            break;
        case 6:
            printf("%d", 6);
            break;
        case 7:
            printf("%d", 7);
            break;
        case 8:
            printf("%d", 8);
            break;
        case 9:
            printf("%c", 9);
            break;
        case 10:
            printf("%c", 'A');
            break;
        case 11:
            printf("%c", 'B');
            break;
        case 12:
            printf("%c", 'C');
            break;
        case 13:
            printf("%c", 'D');
            break;
        case 14:
            printf("%c", 'E');
            break;
        case 15:
            printf("%c", 'F');
            break;
        }
    }
}

void main()
{
    printf("Enter the number: ");
    int num;
    scanf("%d", &num);
    hexa(num);
}

