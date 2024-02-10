#include<stdio.h>

int main()
{
    int marks[2][4];
    marks[0][0] = 98;
    marks[0][1] = 93;
    marks[0][2] = 83;
    marks[0][3] = 88;

    marks[1][0] = 38;
    marks[1][1] = 63;
    marks[1][2] = 43;
    marks[1][3] = 68;

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
