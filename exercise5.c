#include<stdio.h>
void arrrev(int array1[])
{
    for (int i=6;i>=0;i--)
    {printf("%d ",array1[i]);}
    printf("\n");

}
int main()
{
    // int count;
    // printf("enter range of array\n");
    // scanf("%d",&count);
    int arr[7]={1,2,3,4,5,6,67};
    printf("array before reversal \n");
    for (int i=0;i<7;i++)
    {printf("%d ",arr[i]);}
    printf("\narray after reversal\n");
    arrrev(arr);
    return 0;
}