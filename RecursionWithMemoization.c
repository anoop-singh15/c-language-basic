#include <stdio.h>
int arr[100];
int recurwithMemoization(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (arr[n] != -1)
    {
        return arr[n];
    }
    arr[n] = recurwithMemoization(n - 1) + recurwithMemoization(n - 2);
    return arr[n];
}
int main()
{
    for (int i = 0; i < 100; i++)
    {
        arr[i] = -1;
    }
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    printf("value \n%d\n", recurwithMemoization(n));

    return 0;
}