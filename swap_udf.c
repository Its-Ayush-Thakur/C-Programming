#include <stdio.h>
void swap(int x, int y)
{
    int new = x;
    x = y;
    y = new;
    printf("Swapped values of a and b is %d and %d \n", x, y);
}
int main()
{
    int a = 5;
    int b = 9;
    printf("Before Swapping :- \n");
    printf("Values of a and b is %d and %d \n", a, b);

    printf("After Swapping :- \n");
    swap(a, b);
    return 0;
}