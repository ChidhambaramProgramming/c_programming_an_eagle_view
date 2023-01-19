#include<stdio.h>
#include<stdlib.h>              //Jump statement : goto
#include<string.h>

int main()
{
 char *name = NULL;

 name = (char*)malloc(30);
 name = NULL; //Forccefully msking it null to demonstrate goto
 if(name == NULL)
 {
  printf("Unable to allocate the memory !!!\n");
  goto cleanup;
 }

 strcpy(name,"Chidhambaram");
 printf("Name : %s\n",name);

 cleanup:
  printf("Exiting Code...\n");
  printf("\n");
  return 0;
}