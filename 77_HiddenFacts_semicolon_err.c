#include<stdio.h>

int main()
{
 int i;
 printf("Displaying 1 to 10 :\n");
 for(i=0;i<=10;i++);  // Here the printf statement of for loop will never get executed since it's not part of for loop.
  printf("%d\n",i);
 printf("-------------\n");
}