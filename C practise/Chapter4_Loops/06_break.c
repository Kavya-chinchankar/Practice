
#include<stdio.h>
int main()
{
    for(int i=0;i<7; i++)
    {
       if(i==5)
       {
           break;
       }
       printf("%d\n",i);

    }
    printf("we are outside the loop");

    return 0;

}
