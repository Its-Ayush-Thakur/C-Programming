#include <stdio.h>

float sum(float x, float y)
{
    return x + y;
}
float average(float x, float y)
{
    return (x + y) / 2;
}

int main()
{
    float a, b;
    printf("Enter first number here : ");
    scanf("%f", &a);
    printf("Enter second number here : ");
    scanf("%f", &b);

    printf("The sum of the numbers is : %f \n", sum(a, b));
    printf("The average of the numbers is : %f \n", average(a, b));
    return 0;
}