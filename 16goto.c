#include <stdio.h>
// int main()
// {
//     label:
//     printf("WE are inside label");
//     goto end;
//     printf("helo \n");
//     goto label;
//     end:
//     printf(" we are at the end\n ");
//     return 0;
// }
int main()
{
    int num;
    for (int i = 1; i <= 5; i++)
    {
        printf("hello %d\n", i);
        for (int j = 1; j <= 5; j++)
        {
            printf("enter number .enter zero to exit\n");
            scanf("%d", &num);
            
            if (num == 0)
            {
                goto end;
            }
            else{break;}
        }
    }
end:
    printf("You are at the end .Project over\n");
    return 0;
}