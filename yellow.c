#include <stdio.h>
#include <string.h>
int main()
{
    int N,N1,i,j,k,c[5]={},e=0;
    int s[100];
    char ch1;
    printf("enter the encrypted code:");
    scanf("%d",&N);
    printf("enter the number of cities:");
    scanf("%d",&N1);
    char ch[N1][10];
    for(i=0;i<N1;i++)
    {
        scanf("%s",ch[i]);
    }
    for(i=0;i<N1;i++)
    {
        for(k=0;k<5;k++)
        c[k]=0;
        for(j=0;j<strlen(ch[i]);j++)
        {
            if(ch[i][j]=='a'|| ch[i][j]=='e' || ch[i][j]=='i' || ch[i][j]=='o'|| ch[i][j]=='u')
            {c[e]++;
            e++;}
        }
        
        strncpy(s,c,5);
        s[5]='\0';
        
        if(atoi(s)==N)
        {
        printf("the required target is :\n");
        printf("%s",ch[i]);}
    }
    
    printf("no target found");    
    return 0;
}