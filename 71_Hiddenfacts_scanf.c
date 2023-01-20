#include<stdio.h>
//scanf can accept formatted data
int main(void)
{
 int p1,p2,p3,p4;
 int dd, mon, yyyy;
 printf("Enter the IP Address : ");
 scanf("%d,%d,%d,%d",&p1,&p2,&p3,&p4);
 printf("Entered IP : %d,%d,%d,%d\n",p1,p2,p3,p4);
 
 printf("Enter the Date (DD/MM/YYYY) : ");
 scanf("%d/%d/%d",&dd, &mon,&yyyy);
 printf("Entered Date : %d/%d/%d",dd,mon,yyyy);
 return 0;
}