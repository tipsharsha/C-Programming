#include <stdio.h>
int main() 
#define MAD
#undef MAD
{
  
    #ifndef MAD
    char str[200];
    int line,word,ch,spl;
    line = word = ch = spl = 0;
    printf("Enter string terminated with ~ :\n");
    scanf("%[^~]",str);
    for (int i =0 ;str[i] != '\0'; i++)
    {

        if(str[i] == '\n')
        {
            line++;
            word++;
        }
        else if(str[i]==' ' || str[i]=='\t')
        {
            word++;
            ch++;
        }
        else
        {
        ch++;
        }
        if((str[i]<'0' || str[i]>'9')&&(str[i]<'a'||str[i]>'z')&&(str[i]<'A'||str[i]>'Z'))
        spl++;
    }
    printf("\nCharacter counts = %d \n",ch);
    printf("Word counts = %d\n", word);
    printf("Line counts = %d\n", line);
    printf("Special counts = %d\n", spl);
    return 0;
    #endif
}