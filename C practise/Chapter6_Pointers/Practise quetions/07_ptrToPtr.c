#include<stdio.h>

int main()
{
    int i=3;
    int *ptr1=&i;
    int **ptr2=&ptr1;

    printf("The value of i is %d",i);
    printf("\nThe value of i is %d",*ptr1);
    printf("\nThe value of i is %d",**ptr2);

    return 0;
}
