#include <stdio.h>

int main()
{

    // This is a programme to check wheather a number is divisible by 5 or not

    int a;
    printf("Enter the number ");
    scanf("%d", &a);

    printf("%d \n", a % 5 == 0);
    return 0;
}