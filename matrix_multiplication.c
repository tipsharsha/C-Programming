#include <Stdio.h>
int main()
{
    int array[][3] = {1,2,3,45,6,7,6,8,98};
    int array2[3][3]= {2,3,4,5,6,7,8,9,10};
    int i,j,k,m,o,result[3][3];
    int (*p)[3];
    p = array[2];
    int *pint = (int*)p;
    printf("%d",*(pint+1));
    #ifdef HELL
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            for (k=0;k<3;k++)
              result[i][j] = array[i][k]*array2[k][j];
        }
    }
    for (m=0;m<3;m++)
    {
            for (o=0;o<3;o++)
            {
                printf("%d\t", result[m][o]);
            }
            printf("\n");
    }
    #endif
}