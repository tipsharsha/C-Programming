#include <stdio.h>
int main()
{
    int c;
    c = getchar();
    while (c != EOF){
        printf("%d \n", c);
        // prints the ASCII values//
        putchar(c);
        c = getchar();;
    }
}