#include <stdio.h>
struct compl
{
int real;
int imgi;
}n1 = {1,3},n2 = {3,2},n3;
int addcompl(struct compl *p,struct compl *x,struct compl *z)
{
 (z)->real = ((p)->real) + ((x)->real);
 (z)->imgi = ((p)->imgi) + ((x)->imgi);
}
int main()
{
addcompl(&n1,&n2,&n3);
printf("%d+i%d \n", n3.real,n3.imgi);
}