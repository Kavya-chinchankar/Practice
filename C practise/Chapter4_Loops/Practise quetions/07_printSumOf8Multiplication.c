#include<stdio.h>

int main()
{

    int sum = 0;
//   int n=8;
//    for (int i=1; i<11; i++)
//    {
//        int multi=n*i;
//        printf("8 th multiplication:%d\n",multi);
//
//        sum += multi;
//
//    }
//    printf("Sum of 8 multiplication:%d\n",sum);


// OR

    for (int i=1; i<11; i++)
    {
        sum += (i*8);
    }
    printf(" The value of the sum is %d\n",sum);


}
