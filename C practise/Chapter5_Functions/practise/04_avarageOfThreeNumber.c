#include<stdio.h>

double average(int, int, int);

int main()
{
    printf("The average of a,b and c is :%f",average(2,4,2));
    return 0;
}

double average(int a, int b, int c)
{
    //int d=a+b+c;
   // return d/3;

   //return (a+b+c)/3; // we will get integer as answer
   return (a+b+c)/3.0; //now we will get the double as answer
}
