#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// You have to fill in values to a template letter.txt
    // Letter.txt looks something like this:
    // Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
    // Please visit our outlet {{outlet}} for any kind of problems. We plan to server you again soon.
    // You have to read this file and replace these values:
    // {{name}}   - Harry 
    // {{item}}   - Table Fan 
    // {{outlet}} - Ram Laxmi fan outlet

    // Use file functions in c to accomplish the same
char* replace(const char* str,const char* old_char,const char* new_char)
{
    char *result;
    int i,count=0;
    int new_length=strlen(new_char);
    int old_length=strlen(old_char);
    for(int i=0;str[i]!='\0';i++)
    {
        if (strstr(&str[i],old_char)==&str[i])
        {
            count++;
            i=i+old_length-1;
        }
    }
    result=(char*)malloc(i+count*(new_length-old_length)+1);
    i=0;
    while(*str)
    {
        if (strstr(str,old_char)==str)
        {
            strcpy(&result[i],new_char);
            i=i+new_length;
            str=str+old_length;
        }
        else{
            result[i++]=*str++;
        }
    }
    result[i]='\0';
    return result;


}
    
char* replaceWord(const char* s, const char* oldW, 
                const char* newW) 
{ 
    char* result; 
    int i, cnt = 0; 
    int newWlen = strlen(newW); 
    int oldWlen = strlen(oldW); 
  
    // Counting the number of times old word 
    // occur in the string 
    for (i = 0; s[i] != '\0'; i++) { 
        if (strstr(&s[i], oldW) == &s[i]) { 
            cnt++; 
  
            // Jumping to index after the old word. 
            i += oldWlen - 1; 
        } 
    } 
  
    // Making new string of enough length 
    result = (char*)malloc(i + cnt * (newWlen - oldWlen) + 1); 
  
    i = 0; 
    while (*s) { 
        // compare the substring with the result 
        if (strstr(s, oldW) == s) { 
            strcpy(&result[i], newW); 
            i += newWlen; 
            s += oldWlen; 
        } 
        else
            result[i++] = *s++; 
    } 
  
    result[i] = '\0'; 
    return result; 
} 
  
// Driver Program 
int main() 
{ 
    char str[] = "Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.\nPlease visit our outlet {{outlet}} for any kind of problems.\nWe plan to server you again soon."; 
    char c[] = "{{name}}"; 
    char d[] = "Anoop"; 
  
    char* result = NULL; 
  
    // oldW string 
    printf("Old string:\n\n%s\n", str); 
  
    result = replaceWord(str, c, d); 
    printf("\nNew String:\n\n%s\n", result); 
  
    free(result); 
    return 0; 
}