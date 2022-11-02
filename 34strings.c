#include<stdio.h>
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {printf("%c",str[i]);
    i++;}
}
int main()
{
    char str[52];
    
    gets(str);
    //three ways to read  string.
    // printf("%s",str);
    // puts(str);
    printstr(str);
    return 0;
}