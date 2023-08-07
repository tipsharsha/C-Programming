#include <stdio.h>
#include "mine.h"
int main()
{
    #pragma pack(1)
    struct
    {
        char book[13];
        char author[5];
        int price; 
    }b1 = {"Let us C","YK",599};
    
    printf("%u %u %u", &b1.book,&b1.author,&b1.price);
}