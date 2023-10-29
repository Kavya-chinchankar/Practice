#include<stdio.h>
#include<math.h>
int main()
{
    float pie=3.14;
    int radius;
    int height;

    printf("Enter the radius of the circle: ");
    scanf("%d",&radius);

    float area=pie*radius*radius;

    printf("Area of the circle: %f",area);

    printf("\nEnter the helight of the Cylinder: ");
    scanf("%d",&height);

    float volume=area*height;

    printf("\nVolume of the Cylinder: %f",volume);

    return 0;


}

