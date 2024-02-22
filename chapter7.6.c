#include <stdio.h>
// This is a programme to find how many numbers are odd in the given array

int oddnumbers(int arr[], int n);

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 9};
    printf("%d", oddnumbers(arr, 6));
    return 0;
}

int oddnumbers(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}