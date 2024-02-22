#include <stdio.h>

void table(int x)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", x, i, x * i);
    }
}

int main()
{
    int t;
    printf("Enter number here : ");
    scanf("%d", &t);

    table(t);
    return 0;
}