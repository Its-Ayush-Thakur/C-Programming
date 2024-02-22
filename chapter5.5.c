#include <stdio.h>

void PrintHW(int x);
int sum(int s);

int main()
{
    PrintHW(4);

    printf("Sum is %d", sum(5));

    return 0;
}

// Recuresion
void PrintHW(int x)
{
    if (x == 0)
    {
        return;
    }
    printf("Hello World \n");
    PrintHW(x - 1);
}

int sum(int y)
{
    if (y == 1) // Refer notes for detailed explaination
    {
        return 1;
    }
    int sum_of_s = sum(y - 1) + y; 
    return sum_of_s;
}