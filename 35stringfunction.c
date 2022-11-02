#include <stdio.h>
#include <string.h>

int main()
{
    // char s1[]="anoop";
    // char s2[]="singh";
    // // puts(strcat(s1,s2));//catenation between string
    // printf("Length of an string s1 %d\n",strlen(s1));//length of an string
    // printf("the reverse string s1 is\n");
    // puts(strrev(s1));
    // printf("the strcmp for s1 and s2 is %d\n",strcmp(s1,s2));
    /* //Quiz*/
    char str1[20];
    char str2[20];
    char a[50] = " is a friend ";
    gets(str1);
    gets(str2);
    char str3[20];
    strcpy(str3, strcat(str1, a)); // to assign a string to another variable.
    puts(strcat(str3, str2));
    return 0;
}