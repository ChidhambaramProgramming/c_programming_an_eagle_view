#include<stdio.h>
                      //Infinite_While loop
int main()
{
 int i = 1;

 while(1)
 {
  printf("%d ",i);
  i++;
  if(i>10)
  {
   break;
  }
 }
 printf("\n");

 return 0;
}