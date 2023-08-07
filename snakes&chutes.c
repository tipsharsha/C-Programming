#include <stdio.h>
#include <stdlib.h>

int roll_dice()
{
int num = (rand()%(6)) + 1;
printf("%d ", num); 
return num;
}

int main()
{
    int player[max];
    int max;
    printf("Enter the number of players");
    scanf("%d",&max);
    for(int i = 0;i<max; i++)
    *(player+i) = 0;
    for(int i = 0; ;)
}
