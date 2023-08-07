#include <stdio.h>
#include <string.h>
int main()
{
    char str[300];
    char tmp, *left, *right;
    printf("\nEnter the string: ");
    gets(str);
    left = str;
    right = str + strlen(str) -1 ;
    while (right > left)
    {
        tmp = *right;
        *right = *left;
        *left = tmp;
        left+=2;
        right-=2;
        
    }
    printf("reversed string is: %s \n", str);
}