#include <stdio.h>
int main(){
    int *spidey1, *spidey2;
    spidey1 = &spidey2;
    spidey2 = &spidey1;
    printf("%d %d \n", spidey1, &spidey2);
    printf("%d %d", spidey2, &spidey1);
}