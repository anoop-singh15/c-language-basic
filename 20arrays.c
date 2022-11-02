#include <stdio.h>
int main()
{   // 1D array vector
    // int marks[5]={0,9,8,7,6};
    // for (int i = 1; i <= 4; i++)
    // {
    //     printf("Enter value of %d element of an array\n", i);
    //     scanf("%d", &marks[i]);
    // }
    // for (int i = 1; i<=4; i++)
    // {
    //     printf("Marks of student %d is %d\n", i, marks[i]);
    // }
    // marks[0]=34;
    // printf("Marks of student 1 is %d\n",marks[0]);
    // 2D matrix array
    int marks[2][4]={{9,8,7,6},{99,88,77,66}};
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<4;j++){
    //     printf("The marks of %d,%d element of an array is %d\n",i,j,marks[i][j]);
    //     }
    // }
    //in matrix form
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<4;j++)
        {printf("%d ",marks[i][j]);}
        printf("\n");

    }

    return 0;
}