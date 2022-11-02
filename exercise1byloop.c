#include <stdio.h>
int main()
{

    int i, num, con_num;

    while (1)
    {
        printf("Enter the number of which you want multiplication table of\n");
        scanf("%d", &num);
       
        printf("Enter 1 to see multiplication table and 0 to exit\n");
        scanf("%d", con_num);
        if (con_num == 1)
        {
            printf("Table of %d:\n", num);
            for (i = 1; i <= 10; i++)
            {
                printf("%d X %d = %d\n", num, i, num * i);
            }
            break;
        }
        else
        {
            goto end;
        }
    }
end:
    printf("Loop over.THANK YOU");
    return 0;
}