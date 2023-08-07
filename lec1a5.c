#include <stdio.h>
int display(int *j, int n);
int main()
{
    int marks[]= {12,13,67,89};
    display(&marks[0],4);
}
int display(int *j,int n)
{
    int i;
    for (i=0;i<=n-1;i++)
       {
           printf("\n element =%d", *j);
           j++;
       }
    return 0;
}