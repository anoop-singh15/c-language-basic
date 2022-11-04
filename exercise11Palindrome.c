#include <stdio.h>
#include <stdlib.h>
int palindrome(int num)
{
    int digit = 0;
    while (num != 0)
    {
        
        digit = digit * 10 + num % 10;
        num = num / 10;
    }
    return digit;
}
int main()
{
    int number, revnumber;
    printf("Enter a number\n");
    scanf("%d", &number);
    revnumber = palindrome(number);

    if (number == revnumber)
    {
        printf("palindrome number\n");
        printf("%d\n",revnumber);
    }
    else
    {
        printf("Not a palindrome number\n");
         printf("%d\n",revnumber);
    }

    return 0;
}