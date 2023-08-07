#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *p,*q,i=1,j,k,temp;  
 printf("Enter infinite Numbers(-1 to stop reading) :: \n");

 printf("\nEnter %d Number :: ",i);
 p=(int*)malloc(sizeof(int));
 scanf("%d",&p[0]);

 while(*(p+i-1)!=-1)
 {
  i++;

  p=(int*)realloc(p,sizeof(int)*i);
  q=p;
  printf("\nEnter %d Number :: ",i);
  scanf("%d",p+i-1);
 }

 p=q;
 for(j=1;j<i;++j)
 {
  for(k=0;k<i-j-1;++k)
  {
   if(*(p+k)>*(p+k+1))
   {
    temp=*(p+k);
    *(p+k)=*(p+k+1);
    *(p+k+1)=temp;
   }
  }
 }

 printf("\n");

 printf("\nSorted numbers are:  ");
 for(j=0;j<i-1;++j)
 {
  printf(" %d",*(p+j));
 }

 printf("\n");

 return 0;
}