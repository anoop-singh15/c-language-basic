#include<stdio.h>
#include<string.h>
#include<stdlib.h>// malloc,calloc,relloc,free

int main()
{
    // // //USE OF MALLOC
    
    // int* ptr;
    // int n;
    // printf("Enter the size of array\n");
    // scanf("%d",&n);
    // ptr=(int*)malloc(n*sizeof(int));
    // for (int i=0;i<n;i++)
    // {
    //     printf("Enter the value of %d no of an array\n",i);
    //     scanf("%d",&ptr[i]);
    // }
    //  for (int i=0;i<n;i++)
    // {
    //     printf("The value at %d no of an array is %d\n",i,ptr[i]);
        
    // }
    
    
    
    // // //USE OF CALLOC -initialised by zero.
    int* ptr;
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for (int i=0;i<n;i++)
    {
        printf("Enter the value of %d no of an array\n",i);
        scanf("%d",&ptr[i]);
    }
     for (int i=0;i<n;i++)
    {
        printf("The value at %d no of an array is %d\n",i,ptr[i]);
        
    }
    
    
    // // // USE OF REALLOC
    
    printf("Enter the size of NEW array\n");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for (int i=0;i<n;i++)
    {
        printf("Enter the value of %d no of an array\n",i);
        scanf("%d",&ptr[i]);
    }
     for (int i=0;i<n;i++)
    {
        printf("The value at %d no of an array is %d\n",i,ptr[i]);
        
    }
    // // // USE of free not understand
    free(ptr); 
    return 0;
}