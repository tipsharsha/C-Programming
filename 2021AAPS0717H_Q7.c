// Id : 2021AAPS0717H Sriharsha Tippavajhala//

#include <stdio.h>
void main()
{
    float l, w, p;
    // taking everything as a float so floor division doesn't occur and perimeter can be a float too//
    // length as l width as w and perimeter as p//
    l = 45;
    w = 25;
    p = (l - (-w)) / 0.5;
    // addition can't be used here so it is substituted with subtraction and multiplication with division//
    printf("%f", p);
}