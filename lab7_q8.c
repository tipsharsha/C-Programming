#include <stdio.h>
void main()
{
    int sticks, rand, compu;
    for (sticks = 21; sticks > 0;)
    {
        printf("Total Match sticks remaining %d \n", sticks);
        printf("Pick up matches between (1 to 4) :");
        scanf("%d", &rand);
        if (rand > 4)
        {
            printf("Invalid entry:Game Ends...");
            break;
        }
        compu = 5 - rand;
        printf("computer picks up the %d matches. \n", compu);
        sticks = sticks - rand - compu;
        if (sticks == 1)
        {
            printf("You lost and computer won.");
            break;
        }
    }
}