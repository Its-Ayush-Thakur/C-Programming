#include <stdio.h>

// For power function we include math library
#include <math.h>  

int sum(int x, int y);
void PrintTable(int n);

int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number here : ");
    scanf("%d", &b);
    int s = sum(a, b);
    printf("Sum is %d \n", s);

    int n;
    printf("Enter n here : ");
    scanf("%d", &n);
    PrintTable(n);

    float p = 3;
    printf("%f",pow(p,2));
    return 0;
}

int sum(int x, int y) // Here int x and int y copies value from above a and b in sum operator
{
    return x + y; // It returns x + y which means a + b 
}

void PrintTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", i * n);
    }
}