#include<stdio.h>
int main()
{
    char character;
    printf("Enter your charcater:");
    scanf("%c",&character);

    if(character>=97 && character<=122)
    {
        printf("this is lowercase character");
    }
    else
    {
        printf("This is not a lowercase character");
    }
}
