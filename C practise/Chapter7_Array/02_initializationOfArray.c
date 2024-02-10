#include<stdio.h>

int main()
{
    int marks[3] = {33,55,72};
    for (int i=0; i<3; i++)
    {
        printf("The score scored by student %d is %d \n",i+1,marks[i]);
    }

    return 0;

}
