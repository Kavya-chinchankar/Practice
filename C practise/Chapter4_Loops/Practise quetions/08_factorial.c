#include<stdio.h>

int main()
{
    int factorial=1;
    int n = 4;
    for(int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("The value of factorial is %d\n",factorial);

    return 0;

}
