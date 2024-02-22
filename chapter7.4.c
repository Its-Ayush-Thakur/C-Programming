#include <stdio.h>
// This is how we pass array as function arguement
// Here int n shows the size of array , we cant write size in square brackets here
void numbers(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4};
    numbers(arr, 4);
    return 0;
}

void numbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
}