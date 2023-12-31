#include<stdio.h>

int sum(int a, int b);


int main()
{
    // printf("Sum: %d",sum(4,4));
    int a=4;        // a & b are parameter
    int b=4;        // 4 & 4 are arguments
    printf("Sum: %d",sum(a,b));
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}
