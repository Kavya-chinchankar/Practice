#include<stdio.h>

int main()
{
    int i=72;
    int j = 43;
    printf("The address of i and j is %u and %u",&i , &j); // & to get the address
    printf("\nThe address of i and j is %u and %u",*(&i), *(&j)); // * to get the value stored in the address

    return 0;
}
