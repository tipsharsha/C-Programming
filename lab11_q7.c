#include <stdio.h>
void permu(char *x,int s, int e){
char temp;
int i,j;
for (i = s; i <e -1 ;++i)
{
for (j =i+1;j<e;++j)
{
temp = *(x+i);
*(x+i) = *(x+j);
*(x+j) = temp;
permu(x,i+1,e);
temp = *(x+i);
*(x+i) = *(x+j);
*(x+j) = temp;
}
}
printf("%s \n", x);
}
int main()
{
char str[60];
printf("Enter your string: \t");
gets(str);
permu(str, 0, 4);
return 0;
}