
#include<stdio.h>


void greet(int t)
{
     if(t>0 && t<12)
    {
         printf("GOOD MORNING!!!!");
    }
    else if(t>=12 && t<15)
    {
         printf("GOOD AFTERNOON!!!!");
    }
    else if(t>=15 && t<20)
    {
         printf("GOOD EVENING!!!!");
    }
    else if(t>=20 && t<24)
    {
        printf("GOOD NIGHT!!!!");
    }
    else
    {
        printf("Unknown time");
    }
}



int main()
{
    int time;

    printf("Enter the time(1-24):");
    scanf("%d",&time);

    greet(time);
    return 0;
}
