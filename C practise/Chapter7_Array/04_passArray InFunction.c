#include<stdio.h>

void func(int *);

int main()
{
    int marks[3]={1,2,4};
    func(marks);
    return 0;
}

void func(int *ptr)
{
    for (int i =0; i<3; i++)
    {
        printf("The value of marks[%d] is %d\n",i,*(ptr++));
    }
}
