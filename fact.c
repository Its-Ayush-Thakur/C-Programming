#include <stdio.h>
int calc_factorial(int f)
{
    if (f == 0)
    {
        return 1;
    }
    int factorial = calc_factorial(f - 1) * f;
    return factorial;
}
int main()
{
    int f;
    printf("Enter the number : ");
    scanf("%d", &f);

    printf("The factorial of f is %d \n", calc_factorial(f));

    return 0;
}