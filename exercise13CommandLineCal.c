#include <stdio.h>
#include<string.h>
int string_to_int(char *str)
{
    // // /// // IN PLACE OF THIS FUNCTION WE CAN USE "atoi" function.
    // // //example a=atoi(argv[2]);
    int i, x = 0;
    for (x = 0, i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 && str[i] == '-')
        {
            i++;
        }
        if (str[i] >= '0' && str[i] <= '9')
        {
            x = x * 10 + (str[i] - 48);
        }
        else
        {
            break;
        }
    }
    if (str[0] == '-')
    {
        x = -x;
    }
    return (x);
}

int main(int argc, char *argv[])
{
    printf("\n\nThe value of argc is %d\n", argc);
    printf("*************************\n");
    int a, b;
    char *operation=argv[1];
    a = string_to_int(argv[2]);
    b = string_to_int(argv[3]);
    printf("The value of a is :\n%d\nAnd the value of b is:\n%d\n", a, b);
    // printf("\n");
    printf("*************************\n");

    if (strcmp(operation, "add")==0)
    {
        printf("ADDITION OF %d and %d is:\n%d\n", a, b, (a + b));
    }
    else if (strcmp(operation, "subtract")==0)
    {
        printf("SUBTARCTION OF %d and %d is:\n%d\n", a, b, (a - b));
    }
    else if (strcmp(operation, "divide")==0)
    {
        printf("DIVISION OF  %d and %d is:\n%d\n", a, b, (a / b));
    }
    else if (strcmp(operation, "multiply")==0)
    {
        printf("MULTIPLICATION OF %d and %d is:\n%d\n", a, b, (a * b));
    }

    return 0;
}
