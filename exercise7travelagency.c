#include <stdio.h>
#include <string.h>
typedef struct drivers
{
    char name[50];
    char dl_no[25];
    char route[60];
    char kms[20];
} dr;

void inputandoutput()
{
    int a;
    char s[50];
    printf("\nEnter the number of drivers\n");
    scanf("%d", &a);
    dr details[a];
    for (int i = 0; i < a; i++)
    {
        printf("\nEnter name of driver\n");
        // gets(details[i].name);
        scanf("%s", &s);
        strcpy(details[i].name, s);
        printf("\nEnter driving license number\n");
        // gets(details[i].dl_no);
        scanf("%s", &s);
        strcpy(details[i].dl_no, s);
        printf("\nEnter route used by driver\n");
        // gets(details[i].route);
        scanf("%s", &s);
        strcpy(details[i].route, s);
        printf("\nEnter the total distance travelled in kms\n");
        // gets(details[i].kms);
        scanf("%s", &s);
        strcpy(details[i].kms, s);
        printf("\n***********************\n");
       
    }
    printf("\n\n***************Output*************\n\n");
    for (int i = 0; i < a; i++)
    {
        printf("name:");
        puts(details[i].name);
        printf("driving license number:");
        puts(details[i].dl_no);
        printf("route travelled:");
        puts(details[i].route);
        printf("distance in kms:");
        puts(details[i].kms);
        printf("*****************\n");
    }
}

int main()
{
    int b;
start:
    while (1)
    {
        printf("\n                 1>For Input and output \n  \n                 2>To Exit\n");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            inputandoutput();
            break;

        // case 2:
        //     output(a);
        //     break;
        case 2:
            goto end;
        default:
            goto start;
            break;
        }
    }
end:
    printf("\n\n*********Qutting*********\n\n");
    return 0;
}