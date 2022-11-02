#include<stdio.h>
int change(int* a,int* b)
{return *a=1,*b=2;}
int main()
{
    int a=44, b=55;
    printf("The value of a is %d and b is %d\n",a,b);
    change(&a,&b);
    printf("The value of a is %d and b is %d\n",a,b);

    return 0;
}