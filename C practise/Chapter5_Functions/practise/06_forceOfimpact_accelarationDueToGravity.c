#include<stdio.h>

int gravity(int, int);

int main()
{
    printf("The acceleration due to gravity is g:%d",gravity(5,5));
    return 0;

}

int gravity(int m,int s)
{
    int g=(9.8*m)/s*s;
    return g;
}
