#include<stdio.h>

//sum(n) = 1 + 2 + 3 +.......(n-1) + n
//sum(n) = sum(n-1)+n
int sum(int);

int main()
{
    printf("Sum of first Natural Number:%d",sum(5));
    return 0;
}

int sum(n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum(n-1) + n;
}
