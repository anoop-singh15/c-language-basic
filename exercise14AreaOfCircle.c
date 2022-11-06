#include <stdio.h>
#include <math.h>
#define pi 3.14
double square_root(int a)
{
    return sqrt(a);
}
double power(int a)
{
    double d = pow(a, 2);
    return d;
}

float Edistance(int x1, int x2, int y1, int y2)
{
    float a, b, c;
    a = power(x2 - x1);
    b = power(y2 - y1);
    c = square_root(a + b);
    return c;
}
void AreaOfcirlce(float (*fptr)(int, int, int, int))
{
    int x1, x2, y1, y2;
    double radius;
    double sq;
    printf("Enter x1 coordinte \n");
    scanf("%d", &x1);
    printf("Enter y1 coordinte \n");
    scanf("%d", &y1);
    printf("Enter x2 coordinte \n");
    scanf("%d", &x2);
    printf("Enter y2 coordinte \n");
    scanf("%d", &y2);
    radius = fptr(x1, x2, y1, y2);
    sq = power(radius);
    printf("AREA OF CIRCLE WITH DISTANCE %0.3lf is :%0.3lf\n", radius, sq * pi);
}
int main()
{

    float (*distance)(int, int, int, int);
    distance = Edistance;
    AreaOfcirlce(distance);

    return 0;
}