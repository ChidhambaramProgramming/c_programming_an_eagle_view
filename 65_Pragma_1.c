#include<stdio.h>

#pragma startup begin
#pragma exit end

int main(void)
{
 printf("\nInside main()");
}

void begin(void)
{
 printf("\nIn begin()");
}

void end(void)
{
 printf("\nIn end()\n");
}