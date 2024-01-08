#include<stdio.h>

//void change(int *);
void change(int );

int main()
{
    int i = 8;
    int *j;
    j=&i;

    printf("The value of i before change is %d\n",i);
    //change(&i);
    change(i);
    printf("The value of i after change is %d\n",i);
    return 0;

}

//void change(int * ptr)
//{
//    *ptr=(*ptr)*10;
//
//}

void change(int i)
{
    i=(i)*10;

}
