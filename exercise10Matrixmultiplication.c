#include <stdio.h>
#include <stdlib.h>

void matrix()
{
    int row_a, column_a, row_b, column_b;
    int Matrix_a[2][2] = {
        {5,6},
        {4, 4}};
    int Matrix_b[2][2] = {
        {0, 1},
        {2, 3}};
    int new_matrix[2][2] = {{0, 0},
                            {0, 0}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            {
                if (j == 1 && i == 0 && j == 0)
                {
                    new_matrix[i][j] = (Matrix_a[i][1 - j] * Matrix_b[i][1 - j] + Matrix_a[i][j] * Matrix_b[j][i]);
                    printf("\n");
                }
                else
                {
                    new_matrix[i][j] = (Matrix_a[i][j] * Matrix_b[j][j] + Matrix_a[i][1 - j] * Matrix_b[1 - j][j]);
                    printf("\n");
                }
            }
        }
        // printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("     ****** %d ***** ", new_matrix[i][j]);
            printf("\n");
        }
        printf("\n");
    }

    // printf("Enter Number of Rows\n");
    // scanf("%d", &row_a);
    // printf("Enter Number of Columns\n");
    // scanf("%d", &column_a);
}
int main()
{
    matrix();
    //     int input;

    // start:
    //     while (1)
    //     {

    //         printf("\n**************** HOME ****************\n\n           1>START  \n           2>QUIT   \n");
    //         scanf("%d", &input);
    //         switch (input)
    //         {
    //         case 1:
    //             matrix();
    //             break;
    //         case 2:
    //             goto end;
    //         default:
    //             goto start;
    //         }
    //     }
    // end:
    //     printf("\n************************************************\n************** Thanks **************************\n\n");
    return 0;
}