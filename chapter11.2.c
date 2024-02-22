#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for (int i = 0; i <= 4; i++)
    {
        printf("%d \n", ptr[i]);
    }

    // This is reallocate function it is used to increase or decrease the memory using the same pointer and size
    // Here we enter first the pointer name and then the new size
    // Here the size of pointer is increased from 5 to 8
    ptr = (int *)realloc(ptr, 8);
    ptr[5] = 6;
    ptr[6] = 7;
    ptr[7] = 8;
    for (int i = 5; i <= 7; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}