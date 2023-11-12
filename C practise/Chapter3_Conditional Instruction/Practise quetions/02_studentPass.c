#include<stdio.h>
int main()
{
    int marks1,marks2,marks3;

    printf("Enter the marks of the student:\n");

    printf("Enter marks1:\n");
    scanf("%d",&marks1);

    printf("Enter marks2:\n");
    scanf("%d",&marks2);

    printf("Enter marks3:\n");
    scanf("%d",&marks3);

    int total=(marks1+marks2+marks3)/3;

    if(total>=40)
    {
        if(marks1<33 || marks2<33 || marks3<33)
        {
            printf("Your are not passed beacuse of one of the subject is less than 33");
        }
        else
        {
             printf("You passed in the exam");
        }
    }
    else
    {
        printf("Sorry you are not passed the exam");
    }

    return 0;
}
