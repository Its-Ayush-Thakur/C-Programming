#include <stdio.h>

float rectangleArea(float x, float y);
float circleArea(float rad);

int main()
{
    float a, b;
    printf("Enter a here : ");
    scanf("%f", &a);
    printf("Enter b here : ");
    scanf("%f", &b);
    printf("Area of rectangle is %f \n", rectangleArea(a, b));

    float r;
    printf("Enter radius here : ");
    scanf("%f", &r);
    printf("Area of circle is %f \n", circleArea(r));

    return 0;
}
float rectangleArea(float x, float y)
{
    return x * y;
}
float circleArea(float rad)
{
    return 3.14 * rad * rad;
}