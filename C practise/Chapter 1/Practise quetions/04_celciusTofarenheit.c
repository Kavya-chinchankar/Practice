#include<stdio.h>
int main()
{
    float celsius,farenheit;

    printf("Enter the Temparture in celsius:");
    scanf("%f",&celsius);

    farenheit=(celsius*9/5)+32;

    printf("Converted Temprature:%f",farenheit);
    return 0;
}
