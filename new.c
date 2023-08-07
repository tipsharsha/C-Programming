
#include <stdio.h>
void fun(char *s){
    if(s[0]!='\0'){
        fun(s+1);
        fun(s+2);
        printf("%c",s[0]);
    }
}
int main()
{
    fun("pilani");

    return 0;
}