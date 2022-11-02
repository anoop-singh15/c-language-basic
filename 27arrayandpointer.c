#include <stdio.h>
int main()
{
    // char a ='34';
    // char* ptra = &a;
    // printf("%d\n",ptra);
    // ptra++;
    // printf("%d\n",ptra);
    // printf("%d\n",ptra+2);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("the value of position 3 of array is %d\n", arr[2]);
    printf("the address of  1 element of array is %d\n", &arr[0]);
    printf("the address of  1 element of array is %d\n", arr);
    printf("the address of  2 element of array is %d\n", &arr[1]);
    printf("the address of  2 element of array is %d\n", arr + 1);

    printf("the value at address   2 of element of an array is %d\n", *(arr + 1));

    return 0;
}