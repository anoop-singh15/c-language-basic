#include<stdio.h>
int main()
{
    int a,marks;
    printf("enter your age\n");
    scanf("%d",&a);
     printf("enter your marks\n");
    scanf("%d",&marks);
    switch(a){
        case 2:
            printf("age is 2\n");
            switch(marks){

                case 45:
                 printf("your marks are 45\n");
                 break;
                default:
                 printf("Avg amrks\n") ;
                 break;

            }
            break;
        case 3:
            printf("age is 3\n");
            break;
        default:
           printf("nothing matched\n");
           break;
    }

return 0;
}