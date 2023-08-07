#include <stdio.h>
int jump(int *j,int size);
int main()
{
    int arr[4] = {10,20,30,0};
    jump(arr,4);
    return 0;
}
int jump(int *j,int size)
{
    for (int i = 0;i<size;i++)
    {
        printf("%d \n",*j);
        j++;
    }
}