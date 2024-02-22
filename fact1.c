#include <stdio.h>

int calc_fact(int f)
{
    int factorial = 1;
    for (int i = f; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int f;
    printf("Enter number here : ");
    scanf("%d", &f);

    printf("The factorial of number is : %d", calc_fact(f));
    return 0;
}
