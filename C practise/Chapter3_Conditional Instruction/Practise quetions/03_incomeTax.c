#include<stdio.h>
int main()
{
    int income;
    float tax;

    printf("Enter Your income:\n");
    scanf("%d",&income);

    if(income<250000)
    {
        printf("Your income is less than 250000 so no tax for you\n");
    }
    else if(income>250000 && income<500000)
    {
        printf("Your income is greater than 250000 and less than 500000\n");
        tax = tax + 0.05*(income-250000);
    }
    else if(income>500000 && income<1000000)
    {
        printf("Your income is greater than 500000 and less than 1000000\n");
        tax = tax + tax + 0.05*(500000-250000);
        tax = tax + 0.20*(income-500000);
    }
    else
    {
        printf("Your income is greater than 1000000\n");
        tax = tax + tax * 0.05*(500000-250000);
        tax = tax + 0.20*(1000000-500000);
        tax = tax + 0.30*(income-1000000);
    }

    printf("Total tax need to pay is:%f",tax);
}
