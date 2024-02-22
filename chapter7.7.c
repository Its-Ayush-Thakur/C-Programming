#include <stdio.h>
// This is a programme to reverse an array

void reverse(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 7);
}

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstval = arr[i];
        int secondval = arr[n - 1 - i];
        arr[i] = secondval;
        arr[n - i - 1] = firstval; // or

        // int t = arr[i];
        // arr[i] = arr[n - 1 - i];
        // arr[n - 1 - i] = t;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}