#include<stdio.h>
#include<limits.h>     //Integer UnderFlow

int main()
{
 int a = INT_MIN;
 printf("\na = %d\n",a);
 printf("\nAdding 1 to a");
 a = a - 1;
 printf("\na = %d\n",a);
 return 0;
}