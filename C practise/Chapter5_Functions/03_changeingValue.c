#include<stdio.h>


int sum(int, int, int);

int main()
{
    int a=4;
    int b=5;
    int c=88;
    printf("Sum: %d\n",sum(a,b,c));
    printf("value of c: %d",c);

    return 0;
}



int sum(int a, int b, int c)
{
    c=9;
    return a+b;
}
