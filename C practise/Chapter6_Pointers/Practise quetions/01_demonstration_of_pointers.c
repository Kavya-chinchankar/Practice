
#include<stdio.h>

int main()
{
    int i = 72;
    int *j;
    j = &i;

    printf("The value of i is %u",j);
    printf("\nThe value of i is %u",&i);
    printf("\nThe value of i is %u",&j);
    printf("\nThe value of i is %d",*j);
    printf("\nThe value of i is %d",i);
    printf("\nThe value of i is %d",*(&i));
    return 0;
}
