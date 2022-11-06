#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}
void greet()
{
    printf("Hello World\n");
}
int main()
{
    printf("The  Sum of a and b is %d\n", sum(5, 4)); // test function
    int (*func_ptr)(int, int); // function pointer syntax
    func_ptr = &sum;// Creating a function pointer
    int d = (*func_ptr)(6, 4);//Deferencing a function pointer
    printf("The value of d is %d\n", d);

    return 0;
}