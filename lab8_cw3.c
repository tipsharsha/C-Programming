#include <stdio.h>
int main()
{
    int binum, tmp, i, j;
    printf("give your binary number whose complememnt is needed within 60 charcters");
    int rina[60];
    scanf("%d", &binum);
    for (j = 0; binum != 0; j++)
    {
        if (binum % 10 == 0)
        {
            rina[j] = 1;
        }
        else
        {
          rina[j] = 0;   
        }  
        binum /= 10;
    }
    for(i=j-1;i>-1;i--)
    printf("%d", rina[i]);

}