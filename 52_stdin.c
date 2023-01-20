#include<stdio.h>
                      //stdin
int main()
{
 char string [250];
 printf("Enter a string : ");
 fgets(string,250,stdin); //fgets is a stdin function
 printf("\nAfter reading the string using stdin");
 printf("\n%s",string);

 return 0;
}