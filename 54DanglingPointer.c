#include <stdio.h>
#include <stdlib.h>

int danglingpointer()
{
    int a,b,sum;
    a=2;
    b=3;
    sum =a+b;
    return &sum;
}
int main()
{   
    // // // CASE 1:Deallocation of memory

    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 343;
    ptr[2] = 342;
    ptr[3] = 341;
    free(ptr);//ptr is now an dangling pointer
    
    // // // CASE 2:Function returning local variable address.
    int *dangptr=danglingpointer();//dangptr is now dangling pointer.

    // /// /// CASE 3:If a variable goes out of scope.

    int *dangptr3;
    {//scope starts.
        int a=3;
        dangptr3 =&a;
    }//here variable goes out of scope.Which means dangptr3 is now pointing to lacation which is freed and hence dangptr3 is now a dangling pointer


    return 0;
}