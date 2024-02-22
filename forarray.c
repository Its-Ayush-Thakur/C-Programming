#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int marks[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter marks of index %d : ", i);
        scanf("%d", &marks[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }
    printf("Sum is : %d \n", sum);
    return 0;
}
