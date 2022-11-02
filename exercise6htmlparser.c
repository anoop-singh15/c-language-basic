#include <stdio.h>
#include <string.h>
void parser(char string[])
{
    char index[20] = {0}; char a[20] = {0}; char b[20] = {0}; char c[20] = {0}; char d[20] = {0}; char e[20] = {0};
    sscanf(string, "%s %s %s %s %s %s", index, string, a, b, c, d, e);
    printf("The parsed string is\n~~%s %s %s %s~~ \n", string, a, b, c);
}
int main()
{
    char str[50];
    gets(str);
    parser(str);
    return 0;
}