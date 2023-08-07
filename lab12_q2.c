#include <stdio.h>

int main()
{
    FILE *file = fopen("file.txt", "r");
    FILE *fil = fopen("file.txt", "r");
    // two file pointers one for count and one for printing the last line//
    char line[256], anakin[256], ch;
    int obi = 0, countdooku = 1;
    file = fopen("file.txt", "r");
    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
            countdooku++;
    }
    while ((fgets(line, sizeof(line), fil)) && (obi <= countdooku))
    {
        obi++;
        if (obi == countdooku)
        {
            printf("%s", line);
        }
    }
    fclose(file);
    fclose(fil);
    return 0;
}