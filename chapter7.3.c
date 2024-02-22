#include <stdio.h>
int main()
{
    // Array is an pointer
    int marks[5];

    // the array marks points towards the address of 0 index of the marks array as shown below
    int *ptr = &marks[0]; // or
    // int *ptr = marks;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of index %d : ", i);
        // scanf("%d", ptr + i);  //or
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        // printf("Marks of index %d = %d \n", i, *(ptr + i));   //or
        printf("Marks of index %d = %d \n", i, marks[i]);
    }

    return 0;
}