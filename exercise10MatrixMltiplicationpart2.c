#include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

void matrix()
{
    // // // defining simple variable and start of program.
    printf("\n****** MULTIPLICATION OF 2 MATRIX'S ********\n");
    int row_A, row_B, column_A, column_B;
    char n;
start:
    // // // inputing rows and columns
    printf("\nEnter number of row and column in matrix\n**'A'**\nEXAMPLE: 2X3\n");
    scanf("%d%c%d", &row_A, &n, &column_A);
    printf("\nEnter number of row and column in matrix\n **'B'**\nEXAMPLE: 2X3\n");
    scanf("%d%c%d", &row_B, &n, &column_B);
    // // // 3 matrix array 2 to take input and 3rd in which values gets stored after multiplication.
    int Matrix_A[row_A][column_A];
    int Matrix_B[row_B][column_B];
    int New_Matrix[row_A][column_B];
    // // //checking if multiplication is or not possible
    if (column_A == row_B)
    {
        printf("\n\n*Multiplication possible*\n");
        printf("PROCESSING----------------\n");
        printf("\nnew matrix dimension '%d' Rows '%d' Columns\n\n", row_A, column_B);
        // // //inputing matrix A's elements
        printf("ENTER MATRIX A'S ELEMENTES\n\nEXAMPLE:how to input values\nfor 2x3 matrix- 1 2 3\n--------------- 4 5 6\n\n");
        for (int i = 0; i < row_A; i++)
        {
            for (int j = 0; j < column_A; j++)
            {
                scanf("%d", &Matrix_A[i][j]);
            }
        }
        printf("\n");
        // // //inputing matrix B's elements
        printf("ENTER MATRIX B'S ELEMENTES\n\nEXAMPLE:how to input values\nfor 2x3 matrix- 1 2 3\n--------------- 4 5 6\n\n");
        for (int i = 0; i < row_B; i++)
        {
            for (int j = 0; j < column_B; j++)
            {
                scanf("%d", &Matrix_B[i][j]);
            }
        }

        printf("************* MATRIX OUTPUT ******************\n");
        printf("\n");
        // // / / printing matrix a
        for (int i = 0; i < row_A; i++)
        {
            for (int j = 0; j < column_A; j++)
            {
                printf("%d ", Matrix_A[i][j]);

                // printf("%d ", Matrix_B[i][j]);
            }
            printf("\n");
        }

        printf("X\n");
        // // // printing amtrix b.
        for (int i = 0; i < row_B; i++)
        {
            for (int j = 0; j < column_B; j++)
            {
                printf("%d ", Matrix_B[i][j]);
            }
            printf("\n");
        }
        // // // Main logic to multiply matrix and adding it values to new matix.
        printf("\n************ AFTER MULTIPLICATION ************\n");

        for (int i = 0; i < row_A; i++)
        {
            for (int j = 0; j < column_B; j++)
            {
                New_Matrix[i][j] = 0;
                // MAIN LOGIC  FORM HERE
                // //  K < cloumn_A inplace of column_A we can use row_B as they are both same .
                for (int k = 0; k < column_A; k++)
                {
                    New_Matrix[i][j] += Matrix_A[i][k] * Matrix_B[k][j];
                }
                // To ABOVE THIS LINE
                printf("%d ", New_Matrix[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        // /// // Else condition of checkng if multiplication is  possible.
        int var;
        printf("*Multiplication 'NOT' possible*\n");
        printf("RESTARTING----------------\n");
        printf("Press\n1>To renter row column \n2>For HOME\n");
        scanf("%d", &var);
        switch (var)
        {
        case 1:
            goto start;
        case2:
            goto end;
        }
    }
end:
    printf("***********************\n");
}
int main()
{
    /// /// // memory dynamically  not allocated  for now
    int input;

start:
    while (1)
    {

        printf("\n**************** HOME ****************\n\n           1>START  \n           2>QUIT   \n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            // // // Calling other function in main.
            matrix();
            break;
        case 2:
            goto end;
        default:
            goto start;
        }
    }
end:
    printf("\n************************************************\n************** Thanks **************************\n\n");

    return 0;
}