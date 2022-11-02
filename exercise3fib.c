#include <stdio.h>
int fibbo(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return fibbo(n - 1) + fibbo(n - 2);
    }
}
int iter()
{
    int num;
    int a = 0;
    int b = 1;
    int c = a + b;
    printf("Enter nth term\n");
    scanf("%d", &num);
    printf("%d  %d ", a, b);
    while (c <= num)
    {
        printf("  %d  ", c);
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}
int main()
{
    int a, input, num;

    while (1)

    {
        printf("\nEnter \n       1>recursive\n       2>for iterative\n       3>Quit\n");
        scanf("%d", &input);
        switch (input)
        {
        case 3:
            goto end;
            break;
        case 1:

            // int num;
            printf("Enter nth term\n");
            scanf("%d", &num);
            for (int i = 0; i <num; i++)
            {
                printf("%d ", fibbo(i));
            }
            break;
        case 2:
            iter();
            break;
        }
    }
end:
    printf("quitting the program......\n");
    return 0;
}