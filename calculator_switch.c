#include <stdio.h>
int main()
{
    char op;
    float first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter first number : ");
    scanf("%f", &first);
    printf("Enter second number : ");
    scanf("%f", &second);
    switch (op)
    {
    case '+':
        printf("%f + %f = %f", first, second, first + second);
        break;
    case '-':
        printf("%f - %f = %f", first, second, first - second);
        break;
    case '*':
        printf("%f * %f = %f", first, second, first * second);
        break;
    case '/':
        printf("%f / %f = %f", first, second, first / second);
        break;
    default:
        printf("Invalid Entry");
    }
    return 0;
}