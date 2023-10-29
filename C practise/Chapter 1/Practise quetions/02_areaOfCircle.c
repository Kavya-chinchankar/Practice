#include<stdio.h>
#include<math.h>
int main()
{
    float pie=3.14;
    int radius;

    printf("Enter the radius of the circle: ");
    scanf("%d",&radius);

    float area=pie*radius*radius;

    printf("Area of the circle: %f",area);

    return 0;


}
