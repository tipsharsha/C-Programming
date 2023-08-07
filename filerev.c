#include <stdio.h>
#include <stdlib.h>
int file_size(FILE *file)
{ char ch;
FILE *temp = file;
int count = 0;
while((ch = fgetc(temp)) != EOF)
{
    count++;
}
return count;
}
void printrev(FILE *file,int length)
{
  int 
  FILE *temp = file + length;
  fgetc(temp);
  printrev(file,length-1);
  
}
void main()
{
    FILE *file = fopen("file.txt","r");
    int length = file_size(file);
    printf("%d",length);
    printrev(file,length);
}