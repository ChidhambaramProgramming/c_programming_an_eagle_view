#include <stdio.h>



int main()

{
    
 enum { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY }day;
    
 day = WEDNESDAY;
 switch(day) 
 {
        
  case SUNDAY: 
   printf("Sunday\n"); 
   break;
        
  case MONDAY: 
   printf("MONDAY\n"); 
   continue;
        // Switch has break so dont think it can allow continue as well.
  case TUESDAY:                   
   printf("Tuesday\n"); 
   break;
    
 }
        
 return 0;

}


