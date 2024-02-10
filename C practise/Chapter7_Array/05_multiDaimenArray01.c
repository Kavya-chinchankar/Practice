#include<stdio.h>

int main()
{
    int marks[2][4]={
    {98,93,83,88},
    {38,63,43,68}
    };


    for(int i=0; i<2; i++) //row
    {
        for(int j=0; j<4; j++) //column
        {
          printf("%d ",marks[i][j]);
        }
        printf("\n");
    }


    return 0;
}

