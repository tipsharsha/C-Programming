#include<stdio.h>
int main ()
{
  int i,x,y,c,v,j,n,m,k;
  scanf("%d",&i);
  for (x=1;x<=i;x++)
  {
      for (c=0;c<i-x;c++)
      {
        printf(" ");
      }
      for(y=1;y<=x;y++)
      {
          printf("%d", y);
      }
      for(v=x-1;v>0;v--)
      {
        printf("%d", v);
      }
      printf("\n");
  }
    for (j=i;j>0;j--)
   { 
     for (v=0;v<i-j+1;v++)
      {
        printf(" ");
      }
      for(m=1;m<j;m++)
      {
        printf("%d",m);
      }
      for(k=j-2;k>0;k--)
      {
        printf("%d", k);
      }
      printf("\n");
   }
      return 0;
}