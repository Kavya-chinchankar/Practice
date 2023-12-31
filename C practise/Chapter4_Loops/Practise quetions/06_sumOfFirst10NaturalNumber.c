#include<stdio.h>

//void avgAndSum(float, float,float *, float *);
//
//int main()
//{
//    float a=6;
//    float b=423;
//    float sum, avg;
//    avgAndSum(a,b,&sum,&avg);
//
//    printf("The value of the sum is %f and the value of the average is %f",sum,avg);
//
//    return 0;
//}
//
//void avgAndSum(float a, float b, float * ptr1, float * ptr2)
//{
//    *ptr1 = a+b;
//    *ptr2 = (a+b)/2;
//
//}


// using while loop

//int main()
//{
//    int i=1;
//    int sum = 0;
//    while(i<=10)
//    {
//        sum += i;
//        i++;
//    }
//
//    printf("The sum of First 10 natural number is:%d\n",sum);
//    return 0;
//}


// using for loop

//int main()
//{
//    int sum = 0;
//    for(int i=1;i<=10;i++)
//    {
//        sum += i;
//    }
//
//    printf("The sum of First 10 natural number is:%d\n",sum);
//    return 0;
//}

// using do while loop

int main()
{
    int i=1;
    int sum = 0;
    do{
        sum += i;
        i++;
    } while(i<=10);

    printf("The sum of First 10 natural number is:%d\n",sum);
    return 0;
}

