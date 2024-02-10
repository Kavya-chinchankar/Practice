#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50] = "Hello";
    char s2[70] = " Kavya";
    strcat(s1,s2);

    printf(" The string concatenating is %s",s1);
    return 0;
}
