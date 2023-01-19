#include<stdio.h>

//Function prototype for a function
//that returns an int and takes two int parameters

int max(int x,int y);
//int max(int a,intb);
//int max(int,int);

int main(void)
{
 int x = 5;
 int y = 10;
//Calls the max function and assigns the result to m.
 int m = max(x,y);
//Prints "The maximum of 5 and 10 is 10"
 printf("The maximum of %d and %d is %d\n",x,y,m);
 return 0;
}

//Function definition
int max(int a,int b)
{
 if(a > b)
 {
  return a;
 }
 else
 {
  return b;
 }
}