#include<stdio.h>

typedef int integer;

struct Employee
{
 char name[50];
 int age;
 float salary;
};

typedef struct Employee Employee;

int main()
{
 integer a = 10;
 Employee e1;

 printf("Value of a : %d\n",a);
 printf("|\n");
 printf("Enter the employee name : ");
 scanf("%s",e1.name);
 printf("Enter the employee age : ");
 scanf("%d",&e1.age);
 printf("Enter the employee salary : ");
 scanf("%f",&e1.salary);
 printf("|\n");
 printf("Entered Details : \n");
 printf("[ Name : %-20s ][Age : %3d ][Salary : %6f]\n",e1.name, e1.age, e1.salary);
 printf("|\n");

 return 0;
}