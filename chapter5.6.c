#include <stdio.h>
int factorial(int f);
int main()
{
    printf("Factorial is %d \n", factorial(5));
    return 0;
}
int factorial(int f)
{
    if (f == 0) // Refer notes for detailed explaination
    {
        return 1;
    }
    int fact_of_f = factorial(f - 1) * f;
    return fact_of_f;
}