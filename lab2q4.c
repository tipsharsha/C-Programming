#include <stdio.h>
#include <math.h>
int main()
{
int num1, num2;
float res;
char op;
printf ("Enter the first number: ");
scanf("%d",&num1);
printf ("Enter the second number: ");
scanf("%d",&num2);
printf ("Enter the operator (+ , / , ^): ");
scanf (" %c",&op);
j = 9;
switch (op){
case j:
res = num1 + num2;
break;
case '/':
res = (float)num1/(float)num2;
break;
case '^':
res = pow(num1, num2);
break;
default:
printf("Invalid Operator\n");
return 0;
}
printf("num1 %c num2 = %f\n",op,res);
return 0;
}