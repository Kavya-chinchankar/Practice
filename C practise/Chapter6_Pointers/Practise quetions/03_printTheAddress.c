#include<stdio.h>

int main()
{
   int a=5;
   int *b;
   b=&a;

   printf("The address of the variable a is %u",b);
   printf("\nThe value present in the given address is %d",*b);
   return 0;

}
