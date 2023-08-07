#include <stdio.h>
void main()
{
    char ch;
    int countA = 0, countC = 0;
    while((ch =getchar()) != EOF)
    {
       switch (ch)
      {
        case 'a' :
            countA++;
            break;
        case 'A':
            countA++;
            break;
        case 'c':
            countC++;
            break;
        case 'C':
            countC++;
            break;
        case '\n':
            break;
        default:
            printf("error... ");
      }
    }
    printf("\nnumber of A's = %d and number of C's is %d", countA, countC);
}