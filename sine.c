#include <stdio.h>
#include <math.h>

double factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

double power(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return power(x * x, n / 2);
    }
    else
    {
        return x * power(x * x, (n - 1) / 2);
    }
}

double sine(double x, int n)
{
    double result = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        result += (power(-1, i) / factorial(2 * i + 1)) * power(x, 2 * i + 1);
    }
    return result;
}

int main()
{
    double angle;
    int terms;

    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    // Convert angle to radians
    angle = angle * M_PI / 180.0;

    printf("Sine of %lf degrees is approximately %lf\n", angle * 180.0 / M_PI, sine(angle, terms));

    return 0;
}
