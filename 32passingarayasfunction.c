#include <stdio.h>
int read(int ptr, int array1[])
{
    for (int i = 0; i < ptr; i++)
    {
        printf("The value of %d element is %d\n", i, array1[i]);
    }
    // if you change any value here of array it gets reflected in main.
    return 0;
}
void input(int ptr2, int array2[])
{
    for (int i = 0; i < (ptr2); i++)
    {
        printf("Enter value %d\n", i);
        scanf("%d", &array2[i]);
    }
}
int main()
{
    int count, num;
    printf("Enter Range of array\n");
    scanf("%d", &count);
    int arr[count];
    while (1)
    {
        printf("\n           1>to input values in an array\n           2>read values in an array \n           3>to quit\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:

            input(count, arr);
            break;
        case 2:

            read(count, arr);
            break;
        case 3:
            goto end;
        }
    }
end:
    printf("Quitting the program........\n");
    return 0;
}