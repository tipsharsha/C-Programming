#include <Stdio.h>
int main()
{
    int array[][3] = {1,2,3,45,6,7,6,8,98};
    int array2[3][3]= {2,3,4,5,6,7,8,9,10};
    int i,j,k,m,o,result[3][3];
    int (*p)[3];
    p = &array[2];

    int *pint = (int*)p;    printf("%d\n",*(pint));
    printf("%d\n",array[2]);
    printf("%d\n",array[2]);
    printf("%d\n",**(array+2));
    printf("%d\n",*(*(array+2)+1));
}