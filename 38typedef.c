#include <stdio.h>

typedef struct Student 
{
    int id;
    int marks;
    char fav_char;
    char name[50];
}std;
int main()
{
    // int *a,b;
    typedef int* intptr;
    intptr a,b;
    int c = 86;
    a=&c;
    b=&c;
    printf("a %d and b is %d \n",a,b);
    // struct Student s1,s2;
    std s1, s2;
    s1.id = 56;
    s2.id = 3;
    // typedef <previous name> <alias name>
    //  typedef unsigned long ul;
    //  ul l1,l2,l3;
    printf("s1 id is %d\n", s1.id);
    printf("s2 id is %d\n", s2.id);

    return 0;
}