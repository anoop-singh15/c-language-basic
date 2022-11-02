#include <stdio.h>
int main()
{
    int a, counter = 0;
    scanf("%d", &a);
    while (a != 0)
    {
        counter = counter + a % 10;
        a  /= 10;
    }
    printf("%d", counter);
    return 0;
}