#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "Hello";
    char s2[] = " Kavya";
    strcat(s1,s2);

    printf(" The strcmp returns is %d",strcmp(s1,s2));
    return 0;
}
