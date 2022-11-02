#include <stdio.h>
int max(int a, int b, int c, int d)
{
    int i;
    int num[4] = {a, b, c, d};
  
    for (int i = 0; i < 4; i++)
    {
        if (num[0] < num[i])
        {
            num[0] = num[i];
        }
    }
    printf("%d\n", num[0]);
    return 0;
}
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    max(a, b, c, d);

    return 0;
}