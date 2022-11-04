#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceword(const char *str, const char *oldword, const char *newword)
{
    char *resultstring;
    int i, count = 0;
    int newwordlength = strlen(newword);
    int oldwordlength = strlen(oldword);
    // //COUNTING NUMBER of TIMES old word occured
    for (i = 0; str[i] != 0; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;
                // //jumping to over this word
                i = i + oldwordlength - 1;
        }
    }
    // // Making  a new string to fit in replaced word.
    resultstring = (char *)malloc(i + count * (newwordlength - oldwordlength) + 1);

    i = 0;
    while (*str)
    {
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else
        {
            resultstring[i]=*str;
            i+=1;
            str+=1;
        }
    }
    resultstring[i]='\0';
    return resultstring;
}

int main()
{
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genbill.txt", "w");
    char string[200];
    fgets(string, 200, ptr);
    printf("\n\nThe given bill template was:\n\n%s\n", string);

    // call fuction
    char *newstr;
    newstr=replaceword(string,"{{name}}","Anoop");
    newstr=replaceword(newstr,"{{item}}","Shoes");
    newstr=replaceword(newstr,"{{outlet}}","Phoenix Mall");
    fprintf(ptr2, "%s", newstr);
    printf("\n\nThe bill generated is:\n\n%s\n\n", newstr);

    fclose(ptr);
    fclose(ptr2);
    return 0;
}