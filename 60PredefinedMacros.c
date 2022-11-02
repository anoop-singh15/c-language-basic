#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The file name is %s\n",__FILE__);//to know the name of you are working in

    printf("TODAYS DATE is %s\n",__DATE__);//to know current date
    printf("TIME NOW is %s\n",__TIME__);//to know current time
    printf("LINE NO is %d\n",__LINE__);//to know the line  you are working in
    printf("ANSI : %d\n",__STDC__);//to know that You are compiling with ANSI standard



    return 0;
}