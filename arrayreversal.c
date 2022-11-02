#include <stdio.h>
int main()
{
    int count;
    scanf("%d ", &count);
    int a[count];

    for (int i = 0; i<count; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i =count-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}