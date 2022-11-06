#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i=0;
    int *i2;
    while(i<45545)
    {
        printf("HELLO WORLD\n");
        i2=malloc(34444*sizeof(int));
        if (i%100==0)
        {
            getchar();

        }
        i++;
        free(i2);// without This we will encounter Memory leak problem


    }
    return 0;
}