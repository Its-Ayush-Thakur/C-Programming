#include <stdio.h>
int main()
{
    // This is how we declare a multidimensional array
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("%d \n", arr[0][0]);
    printf("%d \n", arr[0][1]);
    printf("%d \n", arr[0][2]);
    printf("%d \n", arr[1][0]);
    printf("%d \n", arr[1][1]);
    printf("%d \n", arr[1][2]);
}
