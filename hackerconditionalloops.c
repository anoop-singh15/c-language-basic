#include <stdio.h>
int main()
{
    int a, b;
    char *str[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
    // scanf("%d", &b);
    for (int i=a;i<=b;i++)
    {
        if (i>=1 && i<=9)
        {
            printf("%s\n",str[i]);
        }
        else if(i%2==0)
        {printf("even\n");}
        else{printf("odd\n");}
    }
   

    return 0;
}