#include<stdio.h>
int main()
{
    int a=34;
    int b=2;
    if(a>6 && b<4)  //AND logic in &&
    {
        printf("yes &");
    }

     if(a>36 || b<4)  //OR logic in ||
    {
        printf("yes |");
    }

     if(a != b)  //NOT equal logic in !=
    {
        printf("yes !");
    }
}
