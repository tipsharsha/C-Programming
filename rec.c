#include "stdio.h"
int digit(int x, int sum);

int main()
{
    int n;
    scanf("%d",n);
    printf("%d",digit(n,0));
}
int digit(int x, int sum)
{
 if (x != 0)
 {
  sum = x%10 + digit(x/10,sum) ;
 }

  else
  {
  return sum;
  }
}