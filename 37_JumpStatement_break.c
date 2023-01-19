#include<stdio.h>
                      //jump statement : break
int main()
{
 int i;

 for(i=1;i<=10;i++)
 {
  printf("%d ",i);
  if(i >= 10)
  {
   break;
  }
 }
 printf("\n");
 return 0;
}