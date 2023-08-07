#include <stdio.h>
#include "l.h"

void foo(int[][3]);
 void main(){   
int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    foo(a);
    printf("%d\n", a[1][1]);
    print_array(*a,9);}
void foo(int b[][3])
{  ++b;
   b[1][1] = 9; }