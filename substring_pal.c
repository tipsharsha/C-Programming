#include <stdio.h>
#define MAX 10
#include <string.h>

char arr[MAX];
int is_pal(int i,int cur_len)
{
    int k = cur_len/2;
    int l;
    for(l=0;l<k;l++)
    {
        if(arr[i+l] != arr[i+cur_len-l-1])
        {
            return 0;
        }
    }
return 1;}
void print_pal(int i,int cur_len)
{
    int l;
    for(l=0;l<cur_len;l++)
    {
        printf("%c",arr[i+l]);
    }
}
void main()
{
    printf("enter upto %d charcters : ",MAX);
    scanf("%s",arr);
    int i,cur_len;
    cur_len = strlen(arr);
    for(i=0;cur_len>0;cur_len--)
    {  

       for(i=0;i+cur_len<=strlen(arr);i++)
       {
           if(is_pal(i,cur_len))
           {
               print_pal(i,cur_len);
               return;
           }
       }

    }
}