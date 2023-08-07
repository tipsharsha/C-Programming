#include <stdio.h>
int main()
{
char text[80];

printf("Enter a string: ");

scanf("%[^\t]",text);

printf("The string is : %s", text);
}