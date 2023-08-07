#include <stdio.h>
int main() {
int s[4][2] ={{1234,54},{12,34},{23,56},{78,89}};
int (*p)[2];
int i,j,*pint;
for (i=0;i<=3;i++)
{
    p = s[i];
    pint = (int*)((p));
    printf("\n");
    for(j=0;j<=1;j++)
        printf("%d  ",*(pint+j));
}

return 0;
}