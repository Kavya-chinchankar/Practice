#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    for(int i=num; i; --i)
    {
        printf("%d\n",i);
    }

    return 0;


}
