#include <stdio.h>
#define PI 3.142

void main()
{
    int r;
    double area, circum;

    printf("\nEnter Radius: ");
    scanf("%d", &r);
    area = PI * r* r;
    circum = 2 * PI *r;

    printf("\nArea of the circle: %0.2lf", area);
    printf("\nCircumference of the circle : %0.2lf", circum);

}