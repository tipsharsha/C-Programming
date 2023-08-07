#include <stdio.h>
#include <string.h>
int main()
{
    char str[300];
    char tmp, *left, *right,*x,*y;
    printf("\nEnter the string: ");
    gets(str);
    left = str;
    right = str + strlen(str) -1 ;
    while (right > left)
    {
        tmp = *right;
        *right = *left;
        *left = tmp;
        left++;
        right--;
    }
    y = str;
    for(x = str;x<str + strlen(str) -1;x++)
    {
        if(*x == ' ')
        {
    left = y;
    right = x-1 ;
    while (right > left)
    {
        tmp = *right;
        *right = *left;
        *left = tmp;
        left++;
        right--;
    }
    y = x;
        }
    }
    printf("reversed string is: %s \n", str,tmp);
}