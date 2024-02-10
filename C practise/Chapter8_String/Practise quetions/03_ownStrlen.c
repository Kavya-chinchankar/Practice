#include<stdio.h>
#include<stdlib.h>

int mystrlen(char* st)
{
    int length = 0;
    char* ptr= st;
    while(*ptr!='\0')
    {
        length++;
        ptr++;
    }
    return length;

}

int main()
{
    char st[] = "Harry";

    printf("The length of this string id %d",mystrlen(st));
    return 0;
}
