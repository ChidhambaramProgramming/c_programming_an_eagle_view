#include<stdio.h>
#include<limits.h>     //Integer OverFlow

int main()
{
 int a = INT_MAX;
 printf("\na = %d\n",a);
 printf("\nAdding 1 to a");
 a = a + 1;
 printf("\na = %d\n",a);
 return 0;
}