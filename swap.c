#include <stdio.h>

int main()
{
    int a = 3;
    int b = 5;

    // int ptr = a;

    int new = b;
    b = a;
    a = new;

    printf("a = %d \n", a);
    printf("b = %d \n", b);

    return 0;
}
