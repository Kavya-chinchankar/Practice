#include<stdio.h>

int fib(int);

int main()
{
    int n =4;
    printf("The nth element of Fibonacci series is :%d",fib(n));
    return 0;
}

int fib(int n)
{
    if (n == 1 || n==2)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
