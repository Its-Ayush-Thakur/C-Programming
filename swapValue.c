#include <stdio.h>
void swap(int x, int y)
{
    int new = x;
    x = y;
    y = new;
    printf("Value1 = %d \n", x);
    printf("Value2 = %d \n", y);
}
int main()
{
    int Value1 = 3;
    int Value2 = 4;
    printf("Before Swapping :- \n");
    printf("Value1 = %d \n", Value1);
    printf("Value2 = %d \n", Value2);

    printf("After Swapping :- \n");
    swap(Value1, Value2);
    return 0;
}
