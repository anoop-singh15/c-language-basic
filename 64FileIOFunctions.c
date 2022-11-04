#include<stdio.h>
// #include<string.h>
#include<stdlib.h>

int main()
{
    FILE *ptr=NULL;
    char *string=(char*)malloc((54+1)*sizeof(char));
    
    // // ************ TO READ A FILE **********
    // ptr=fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content this string has is:\n%s\n",string);
    

     // // ************ TO WRITE A FILE **********
     scanf("%[^\n]%*c",string);
     ptr=fopen("myfile.txt","a");
     fprintf(ptr,"%s",string);


    free(string);
    return 0;
}