#include<stdio.h>

int main()
{
//    int n=3;
    int n;
    printf("Enetr number:");
    scanf("%d",&n);

    for(int i = 10; i>0; i--)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }

    return 0;
}
