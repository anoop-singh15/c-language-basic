#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Employee_detail
{
    char emp_id[100];
} emp;
void first()
{
    emp id[3];
    char *s;
    int n;
    for (int i = 0; i < 3; i++)
    {
        printf("\nEmployee:%d\n", i + 1);
        printf("Enter number of characters in your emp_id\n");
        scanf("%d", &n);
        s = (char *)malloc((n+1) * sizeof(char));
        printf("Enter  employee  %d's id\n", i + 1);
        scanf("%s", s);
        strcpy(id[i].emp_id, s);
        free(s);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nemployee %d's id: ", i + 1);
        puts(id[i].emp_id);
    }
}
int main()
{
    first();
    return 0;
}