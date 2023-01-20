#include<stdio.h>

int main(void)
{
 int a = 10,b = 5;
 int (*const ptr_a) = &a;

 printf("a : %d\n",a);
 printf("ptr_a : %d\n",*ptr_a);

 *ptr_a = 20;

 printf("a : %d\n",a);
 printf("ptr_a : %d\n",*ptr_a);

 ptr_a = &b;    // it shows an error since we are trying to modify the ptr_a is a constant pointer to an integer.

 printf("ptr_a : %d\n",*ptr_a);

 return 0;
}