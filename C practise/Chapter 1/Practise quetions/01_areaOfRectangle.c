#include<stdio.h>
int main()
{
    int length,bredth,area;
    printf("Enter the the length of the rectangle:");
    scanf("%d",&length);
    printf("Enter the the breadth of the rectangle:");
    scanf("%d",&bredth);
    area=length*bredth;
    printf("Area of the rectangle:%d",area);

    return 0;
}