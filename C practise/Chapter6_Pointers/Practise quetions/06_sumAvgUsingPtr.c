#include<stdio.h>

void avgAndSum(float,float,float*, float*);


int main()
{
    float a=8;
    float b=2;
    float sum,avg;
    avgAndSum(a,b,&sum,&avg);
    printf("The sum and average of two number is %f and %f",sum,avg);

    return 0;
}


void avgAndSum(float a, float b ,float *ptr1, float *ptr2)
{
    *ptr1 = a+b;
    *ptr2 = (a+b)/2;

}
