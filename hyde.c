#include <stdio.h>
#include "l.h"
int main()
{
    int array[3][1] = {{1}, {2}, {3}};
    printf("\n%d", *(*array+1));
}