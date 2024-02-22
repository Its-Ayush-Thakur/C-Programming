#include <stdio.h>

int main()
{
    int Value1 = 3;
    int Value2 = 4;

    int *ptr = &Value1;

    int new = Value2;
    Value2 = *ptr;
    Value1 = new;

    printf("Swapped Value1 = %d \n", Value1);
    printf("Swapped Value2 = %d \n", Value2);
    return 0;
}
