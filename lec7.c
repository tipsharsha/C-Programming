#include <stdio.h>
int main(void)
// void is a arg//
{
    int value1,value2,value3,product;
    printf("enter values");
    scanf("%d%d",&value1, &value2);
    product = value1*value2;
    printf("product =  %d\n",product);
    return 0;
}