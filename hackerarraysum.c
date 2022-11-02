#include <stdio.h>
int main()
{
    int count,counter=0;
    scanf("%d",&count);
     int num[count];
     for (int i=0;i<count;i++)
     {scanf("%d",&num[i]);}
     for (int j=0;j<count;j++)
     {counter+=num[j];}
     printf("%d",counter);
     return 0;
}