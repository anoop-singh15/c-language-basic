#include <stdio.h>
int main()
{

   int count;
  long long int counter=0;

    scanf("%d", &count);
    int num[count];
    for (int i = 0; i<count; i++)
    {

        scanf("%d", &num[i]);
    }

    for (int i = 0; i<count; i++)
    {
        
        // printf("%d\n", counter);
        counter=counter+num[i];
    }
    printf("%llu\n",counter);
    return 0;
}