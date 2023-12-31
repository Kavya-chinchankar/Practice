#include<stdio.h>

//factorial(n)= n * n-1 * n-2 * n-3 * 4 * 3 * 2 * 1
//factorial(5)= 5 * 4 * 3 * 2 * 1
//factorial(1)=1
//factorial(0)=1

//factorial(n) = n * n-1 * n-2 * n-3 * 4 * 3 * 2 * 1
//factorial(n) = n * ( n-1 * n-2 * n-3 * 4 * 3 * 2 * 1)
//factorial(n) = n * factorial(n-1)


int factorial(int);

int main()
{
    printf("The value of factorial is %d\n",factorial(4));
    return 0;
}

int factorial(int n)
{
    if ( n==1 || n==0)
    {
        return 1;
    }
    return n *factorial(n-1);
}


