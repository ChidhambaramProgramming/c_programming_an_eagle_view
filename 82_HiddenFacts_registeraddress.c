#include<stdio.h>

int main()
{
 register int a=10;   //We can't get the address of register variable.
 
 printf("Value of a : %d\n",a);
 printf("Address of a : %x\n",&a);

 return 0;
}