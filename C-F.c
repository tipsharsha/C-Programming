#include <stdio.h>
main()
{
    float f, c;
    f = 0;
    printf("Conversion of Farenheit to celsius \n");
    while (f <= 300){
        c = 5.0/9.0*(f-32);
        printf("%3.2f\t%3.2f\n", f, c);
        f = f + 20;
    }
}