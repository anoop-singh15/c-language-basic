#include <stdio.h>

int conversion(int num)
{
    // float value;
    int value;

    if (num == 1)
    {
        float value;

        printf("Enter the value\n");
        scanf("%f", &value);
        printf("\n%0.3f kms is equal to %0.4f miles\n\n", value, (float)(value * 0.621371));
    }
    else if (num == 2)
    {
        float value;
        printf("Enter the value\n");
        scanf("%f", &value);
        printf("\n%0.3f Inches  is equal to %0.4f Foot\n\n", value, (float)(value * 0.0833333));
    }

    else if (num == 3)
    {
        float value;

        printf("Enter the value\n");
        scanf("%f", &value);
        printf("\n%0.3f Centimeters is equal to %0.4f Inches\n\n", value,(float) (value * 0.393701));
    }
    else if (num == 4)
    {
        float value;

        printf("Enter the value\n");
        scanf("%f", &value);
        printf("\n%0.3f Pound is equal to %0.4f Kilograms\n\n", value, (float)(value * 0.453592));
    }
    else if (num == 5)
    {
        float value;

        printf("Enter the value\n");
        scanf("%f", &value);
        printf("\n%0.3f Inches is equal to %0.4f Metres\n\n", value, (float)(value * 0.0254));
    }
    return 0;
}
void main()
{
    while (2 < 3)
    {

        int a;
        printf("\nPRESS 1,2,3,4,5 and 6 respectively for\n      1> To convert kilometres into Miles\n      2> To convert Inches into Foot\n      3> To convert Centimetres into Inches\n      4> To convert Pound to Kilograms\n      5> To convert Inches into  Metres\n      6> To EXIT \n");
        scanf("%d", &a);
        if (a == 1)
        {
            conversion(a);
            continue;
        }
        else if (a == 2)
        {
            conversion(a);
            continue;
        }
        else if (a == 3)
        {
            conversion(a);
            continue;
        }
        else if (a == 4)
        {
            conversion(a);
            continue;
        }
        else if (a == 5)
        {
            conversion(a);
            continue;
        }
        else
        {
            goto end;
        }
    }
end:
    printf("THANK YOU\nQuitting the program.......\n");
}