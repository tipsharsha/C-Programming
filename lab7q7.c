#include <stdio.h>

int main()
{
    int n, num = 0,count = 0,c = 0,i;
    char numbers[10][10]={"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    printf("Enter any number to print in words: ");
    scanf("%d", &n);
    // Store reverse of n in num //
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
        count++;
    }
    while(num != 0)
    {
        switch(num%10)
        {
            case 0: 
                printf("%s ", numbers[0]);
                break;
            case 1: 
                printf("%s ", numbers[1]);
                break;
            case 2: 
                printf("%s ", numbers[2]);
                break;
            case 3: 
                printf("%s ", numbers[3]);
                break;
            case 4: 
                printf("%s ", numbers[4]);
                break;
            case 5: 
                printf("%s ", numbers[5]);
                break;
            case 6: 
                printf("%s ", numbers[6]);
                break;
            case 7: 
                printf("%s ",numbers[7]);
                break;
            case 8: 
                printf("%s ", numbers[8]);
                break;
            case 9: 
                printf("%s ",numbers[9]);
                break;
        }
        c++;
        num = num / 10;
    }
    if (c<count)
    {
        for(i=0;i < count-c ;i++)
        printf("Zero ");
    }
    return 0;
}