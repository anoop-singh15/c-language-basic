#include <stdio.h>
int main()
{
    int i, age;
    for (i = 0; i < 11; i++)
    {
        printf("hello %d\n", i);
        printf("Enter your age\n");
        scanf("%d", &age);
        printf("age %d\n", age);
        if (age == 18)
        {
            continue;
        }
        printf("aninfnanf");
    }
    return 0;
}