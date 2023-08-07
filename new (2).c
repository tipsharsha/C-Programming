#include <stdio.h>
#include <math.h>
int main()
{
    int a=0,c=0,n,t;
    scanf("%d",&n);
    t=n;
    int k=n;
    while(n)
    {
        n=n/10;
        c++;
    }
    
    for(int i=c-1;i>0;i--)
    {
        a+=(t%10)*pow(10,i);
        t=t/10;
    }
     if(a==k)
     {
         printf("it is a palindrome");
     }
     else
     {
         printf("it is not a palindrome");
     }
    return 0;
}