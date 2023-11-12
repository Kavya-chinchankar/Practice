#include<stdio.h>

int main()
{
    int age = 45;
    int placeCode = 12;

    //scenario 1
//    if(age>18)
//    {
//        printf("You are eligible to drive");
//    }
//    else if(age>15)
//    {
//        printf("You are not eligible to drive but we will check for a toy vehicle for you");
//    }
//    else
//    {
//        printf("You are a kid You cannot drive");
//    }


    if(age>18)
    {
        printf("You are eligible to drive\n");
    }
    if(age>15)
    {
        printf("You are not eligible to drive but we will check for a toy vehicle for you\n");
    }
    if(age>6)
    {
        printf("You are a kid You cannot drive\n");
    }


    return 0;
}
