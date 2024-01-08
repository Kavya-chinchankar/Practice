//write a program having a variable i,Print the address of i, pass this variable to a function and print its address are these address same? why?

#include<stdio.h>

void func(int *);

int main()
{
    int i = 8;
    int *j;
    j=&i;

    func(&i);

    printf("The address of the variable i is %u\n",j);

    return 0;

}

void func(int * ptr)
{
    printf("The value of address ptr from function fun is %u\n",ptr);

}
