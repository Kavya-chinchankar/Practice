//create an array of 10 numbers Verify using pointer arithemtic thet (ptr+2) points to the third element where ptr is a pointer pointing to the forst elemnt of the array

#include<stdio.h>

int main()
{
    int arr[10];
    arr[0]=5;
    arr[1]=6;
    arr[2]=8;
    int *ptr = arr; //int * ptr = &arr[0];

    printf("The value at ptr is %d\n ",*ptr);

    *ptr++;

    printf("The value at ptr is %d\n ",*ptr);


}
