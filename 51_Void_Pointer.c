#include<stdio.h>
#include<stdlib.h>            //void pointer

int main()
{
 char *name = "Chidhambaram Bhagavathy";
 int a = 10,*ptr_a = &a;
 void *v_ptr = NULL;

 printf("Name : %s\n",name);
 printf("a : %d\n",a);
 printf("*ptr_a : %d\n",*ptr_a);
 printf("|\n");

 v_ptr = name;
 printf("void ptr -> name : %s\n",(char*)v_ptr);
 v_ptr = &a;
 printf("void ptr -> a : %d\n",*((int*)v_ptr));
 v_ptr = ptr_a
 printf("void ptr -> ptr_a : %d\n",*((int*)v_ptr));

 return 0;
}