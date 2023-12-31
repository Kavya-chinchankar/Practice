#include<stdio.h>

float CtoF(int);

int main()
{
    printf("The converted temperature:%f",CtoF(37));

    return 0;
}

float CtoF(int calsius)
{
    return (calsius*9/5.0)+32;
}
