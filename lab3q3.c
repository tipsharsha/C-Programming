#include <stdio.h>
int main()
{
    int a[20],*p;
    int n;
    printf("Enter the number of elements you want to enter---");
    scanf("%d",&n);
    printf("Enter the 1 element---");
    scanf("%d",&a[0]);
    printf("\n");
    p=&a[0];
    printf("\t");
    printf("%p",p);
    printf("\n");
    for(int i=2;i<=n;i++)
    {
        p++;
        printf("Enter the %d element---",i);
        int c=scanf("%d",p);
        printf("\t");
        printf("%p",p);
        printf("\n");
    }
    printf("The final list is---\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}