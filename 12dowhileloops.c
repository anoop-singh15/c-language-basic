#include <stdio.h>
int main()
{
    int i, index = 0;
    printf("enter number\n");
    scanf("%d", &i);

    do
    {
        index += 1;
        printf("Hello World %d\n", index);

    } while (index < i);

    return 0;

    // do while execute atleast once
}