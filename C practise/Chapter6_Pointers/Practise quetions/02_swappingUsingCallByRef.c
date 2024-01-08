#include<stdio.h>

void swap(int*,int*);

int main()
{
    int a=5;
    int b=7;
    printf("The value of a and b before swap:%d and %d",a,b);
    swap(&a,&b);
    printf("\nThe value of a and b after a swap:%d and %d",a,b);
    return 0;
}



void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;


}
