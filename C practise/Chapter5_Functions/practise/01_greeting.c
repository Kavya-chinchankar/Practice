#include<stdio.h>

void goodMorning()
{
    printf("GOOD MORNING!!!!\n");

}

void goodAfternoon()
{
    printf("GOOD AFTERNOON!!!!\n");
}

void goodEvening()
{
    printf("GOOD EVENING!!!!\n");
}

void goodNight()
{
    printf("GOOD NIGHT!!!!\n");

}

void greet(int t)
{

    printf("hello");
    if(t>0 && t<12)
    {
        goodMorning();

    }
    else if(t>=12 && t<15)
    {
        goodAfternoon();
    }
    else if(t>=15 && t<20)
    {

        goodEvening();
    }
    else if(t>=20 && t<24)
    {
        goodNight();
    }
    else
    {
        printf("Unknown time");
    }
}


int main()
{
    int t;

    printf("Enter the time(1-24):");
    scanf("%d\n",&t);

    greet(t);

    return 0;
}
