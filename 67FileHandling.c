#include <stdio.h>
#include<string.h>

int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("myfile.txt", "r");
   
   
    // // //************fgetc *********
    // char c = fgetc(ptr);
    // printf("The character iam reading is %c\n", c);
    // c = fgetc(ptr);
    // printf("The character iam reading is %c\n", c);
     
     // // //*******To get a string.*****
    //  char str[100];
    //  fgets(str,100,ptr);
    //  printf("The string is :\n%s\n",str);

    // // // **** fputc ands fputs ****
    // ptr = fopen("myfile.txt", "a");
    // fputc('o',ptr);
    // fputs("this is anoop",ptr);

     // // // **** r+ ****
    // ptr = fopen("myfile.txt", "r+");
    // fputc('o',ptr);
    // fputs("this is anoop",ptr);

     // // // **** w+ ****
    // ptr = fopen("myfile.txt", "w+");
    // fputc('o',ptr);
    // fputs("this is anoop",ptr);
     
      // // // **** a+ ****
    ptr = fopen("myfile.txt", "a+");
    // fputc('o',ptr);
    // fputs("this is anoop",ptr);
    char str[23];
    fgets(str,3,ptr);
    printf("The string is :\n%s\n",str);




    fclose(ptr);
    return 0;
}