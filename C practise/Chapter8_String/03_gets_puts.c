#include<stdio.h>

int main()
{
    char ch1[45];

    printf("Enter your Name: ");
    gets(ch1);

    //puts(ch1);
    printf("Your Name is %s",ch1);
    return 0;
}
