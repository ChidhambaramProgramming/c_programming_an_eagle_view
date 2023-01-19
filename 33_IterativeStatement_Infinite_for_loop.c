#include<stdio.h>
                      //infinite_for loop
int main()
{
 int i = 1;

 for(;1;)
 {
  printf("%d ",i++);
  if(i>10)
  {
   break;
  }
 }
 printf("\n");

 return 0;
}