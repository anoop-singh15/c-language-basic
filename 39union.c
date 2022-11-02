#include<stdio.h>
#include <string.h>
typedef union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}std;
int main()
{//we can move a line by pressing alt+arrowkey.
    std s1;
    s1.id=1;
    s1.marks=77;
    s1.fav_char='f';
    strcpy(s1.name,"anoop");
    printf("the id is %d \n",s1.id);
    printf("the marks is %d \n",s1.marks);
    printf("the fav_char is %c \n",s1.fav_char);
    printf("the name is %s\n",s1.name);

    return 0;
}