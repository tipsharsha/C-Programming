#include <stdio.h>
#include <string.h>
int main()
{
    char s1[32],tmp;
    int x,i,j;
    fgets(s1, 32, stdin);
    for(i=0;i<strlen(s1);i++)
    {
     for(j=i+1;j<strlen(s1);j++)
     {
         if (s1[i]>s1[j])
         {
             tmp = s1[i];
             s1[i] = s1[j];
             s1[j] = tmp;
         }
     }
    }
    puts(s1);
}