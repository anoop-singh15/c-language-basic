#include <stdio.h>
int factorial(int number)
{
    if (number==1 || number==0){
        return 1;
    }
    else{
        return (number * factorial(number -1));
    }

}


void main()
{
    int num;
    printf("ENTER NUMBER \n");
    scanf("%d",&num);
    printf("Factorial of %d is %d\n",num,factorial(num));
    // return 0;






}