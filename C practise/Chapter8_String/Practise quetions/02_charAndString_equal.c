#include<stdio.h>
#include<string.h>

int main()
{
    char str1[6];
    printf("Enter the string of length 5 you want to input using percent c: ");
    for (int i =0; i<5; i++)
    {
        scanf("%c",&str1[i]);
        fflush(stdin);
    }
    str1[5] = '\0';

    printf("Comparing this string kavya gives %d ",strcmp ("kavya",str1));
    return 0;
}
