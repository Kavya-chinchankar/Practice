#include<stdio.h>
#include<string.h>

int main()
{
    char name[] = "Kavya";
    // encrypt the value
    for(int i=0;i<5;i++)
    {
        name[i] ++;
    }
    printf("The string is %s",name);

    //decrypt the value
        for(int i=0;i<5;i++)
    {
        name[i] --;
    }
    printf("\nThe string is %s",name);



    return 0;
}
