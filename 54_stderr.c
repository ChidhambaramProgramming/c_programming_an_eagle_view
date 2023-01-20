#include<stdio.h>
                      //stderr
int main()
{
 char *filename = "nonexistent,txt";
 FILE *fp = fopen(filename "r");
 if(fp == NULL)
 {
  //print an error message to stderr
  fprintf(stderr, "Error : Unable to open file %s\n",filename);
  return 1;
 }

 //Do something with the file

 fclose(fp);
 return 0;
}