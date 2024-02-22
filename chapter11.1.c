#include <stdio.h>
// We have to include the below library to use the dynamic memory alocation functions
#include <stdlib.h>
int main()
{
    int *ptr;
    // Here below the malloc(Memory allocation) functions provide 20 bytes space because size of an integer is 4 but it returns a pointer value of type void but int type is required in above code show we typecast its value to int by the help of (int*)
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

    // This is free function , normally when we define variables the c compiler frees the variables when their work is completed but in case of malloc and calloc the c compiler don't know where their use ends so in order to clean memory we free malloc and calloc functions manually with the help of free function
    free(ptr);

    // This is calloc(Continuos allocation) function it is same as malloc but it initializes 0 at each place and little change in the syntax as shown below
    // As we have freed the ptr by free function so we can use it again
    ptr = (int *)calloc(5, sizeof(int));

    for (int i = 0; i <= 4; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}