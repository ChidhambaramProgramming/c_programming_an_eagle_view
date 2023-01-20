#include <stdio.h>



#pragma GCC optimize ("O3")



int main(void) 
{
	
 const volatile int local = 10;
	 //use of volatile keyword forces the compiler to always refer the actual memory location.
 int *ptr = (int*) &local;

	
 printf("Initial value of local : %d \n", local);

	
 *ptr = 100;

	
 printf("Modified value of local : %d \n", local);

	
 return 0;

}
