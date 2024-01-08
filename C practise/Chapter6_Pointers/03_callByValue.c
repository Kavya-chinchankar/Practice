#include<stdio.h>

int sum(int, int);

int main()
{
    int x = 7;
    int y = 8;
    printf("The value x + y is %d",sum(x,y));
    printf("\nThe value of x and y is %d and %d",x,y);

    //printf("The value of a + b is %d",sum(3,6));
    return 0;
}

int sum(int a,int b)
{
    a=56;
    return a + b;
}
