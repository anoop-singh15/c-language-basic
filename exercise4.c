#include <stdio.h>
void revpat()
{
    int a;
    printf("Enter number of rows\n");
    scanf("%d", &a);
    for (int i = a; i >=1; i--)
    {
        printf("\n");
        for (int j = 1; j <=i; j++)
        {
            printf("* ");
        }
    }
}
void pat()
{
    int a;
    printf("Enter number of rows\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
    }
}
int main()
{
    int num;
    while (1)
    {
        printf("\nEnter........\n      1>For Triangular star pattern........\n      2>For Reverse star patten........\n      3>To Quit\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            pat();
            break;
        case 2:
            revpat();
            break;
        case 3:
            goto end;
        }
    }

end:
    printf("Quitting the program..........\n");
    return 0;
}