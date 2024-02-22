#include <stdio.h>
int Array_Sum(int arr[], int size)
{
    int Sum = 0;
    for (int i = 0; i < size; i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The sum of the array is: %d \n", Array_Sum(arr, size));
    return 0;
}

