#include <stdio.h>
float diameter(float r)
{
    return 2 * r;
}
float circumference(float r)
{
    return 2 * 3.14 * r;
}
float area(float r)
{
    return 3.14 * r * r;
}
int main()
{
    float r;
    printf("Enter radius here : ");
    scanf("%f", &r);

    printf("Diameter of circle is : %f \n", diameter(r));
    printf("Circumference of circle is : %f \n", circumference(r));
    printf("Area of circle is : %f \n", area(r));
    return 0;
}