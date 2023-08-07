#include <stdio.h>
#include <string.h>
void main()
{
    char str[40];
    puts("what is your name");
    gets(str);
    printf("Hello! ");
    puts(str);
}