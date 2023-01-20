#include<stdio.h>
                      //Pre-processor directives
int main()
{
 printf("default Macro Values \n");
 printf("=========================\n");
 printf("__TIME__:%s\n",__TIME__);
 printf("__STDC__:%d\n",__STDC__);
 printf("__LINE__:%d\n",__LINE__);
 printf("__FILE__:%s\n",__FILE__);
 printf("__DATE__:%s\n",__DATE__);

 return 0;
}