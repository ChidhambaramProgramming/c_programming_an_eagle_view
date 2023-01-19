#include<stdio.h>

int main()
{
 int a = 10,b = 5,c;
 c = a + b;
 switch(c)   //Switch cant have a variable on its expression.It can have only constant expression
 {
  case a : printf("B value is 0\n");break;
  case a+b : printf("Its an addition result\n");break;
  case a-b : printf("Its an subtraction result\n");break;
  case a*b : printf("Its an multiplication result\n")break;
  case a/b : printf("Its an division result\n")break;
 }
 return 0;
}