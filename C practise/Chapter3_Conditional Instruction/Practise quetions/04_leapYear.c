#include<stdio.h>
int main()
{
    int year;

    printf("Enter a year:\n");
    scanf("%d",&year);

//    if(year%4 == 0 && year%100 != 0) || (year%400 == 0)) leap year
    if(year % 4 != 0)
    {
        printf("%d is a common year",year);
    }
    else if(year % 100 != 0)
    {
        printf("%d is a leap year",year);
    }
    else if(year % 400 != 0)
    {
        printf("%d is a common year",year);
    }

    else
    {
        printf("%d is not a leap year",year);
    }

    return 0;
}
