#include <stdio.h>
#include <string.h>
void main()
{
    char message[300];
    int need;
    int shift;
    printf("Do you need to decode the message(1) or encode the message(0)    ");
    scanf("%d",&need);
    if(need)
    {
        printf("Give the message to be encoded\n");
        gets(message);
        printf("What is the shift you would like");
        scanf("%d",&shift);
        for(int i = 0;message[i] != '\0';i++)
        {
            message[i] = message[i] + shift;
        }
    }
    else
    {
        printf("Give the message to be decoded");
        gets(message);
        printf("What is the shift you would like");
        scanf("%d",&shift);
        for(int i = 0;message[i] != '\0';i++)
        {
            message[i] = message[i] - shift;
        }
    }
    puts(message);
    return;
}