#include<stdio.h>

struct bit
{
 unsigned int result : 1;
};

int main()
{
 struct bit data1 = {0};
 struct bit data2 = {1};

 printf("Result on data1 = %d\n",data1.result);
 printf("Result on data2 = %d\n",data2.result);
 return 0;
}