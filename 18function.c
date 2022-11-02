#include <stdio.h>
int sum()
{
    int d, f;
    printf("enter 2 numbers\n");
    scanf("%d\n%d", &d, &f);
    return d + f;
}
void main()
{
    int c;
    c = sum();
    printf("The sum is %d \n", c);
}