#include<stdio.h>

#define square (x) +(x*x)
 //This is incorrect due to space mentioned between square and (x).#define works in search and replace fashion.

int main()
{
 int x = 10, y = 5;

 printf("X square = %d\n",square);
 printf("Y square = %d\n",square);
 return 0;
}