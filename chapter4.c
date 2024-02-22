#include <stdio.h>

int main()
{
    // This is for loop
    // In it there are three conditions initialisation which means from where to start ,condition which means till where to continue and updation which means how to update

    for (int i = 1; i <= 5; i = i + 1)
    {
        // printf("Hello World \n");
        printf("%d \n", i);
    }

    // This is pre increment operator ++i , it increases value by 1 and uses also
    // This is pre decrement operator --i , it decreases value by 1 and uses also
    // This is post increment operator i++ , it first increases value by 1 but not uses it first
    // This is post decrement operator i-- , it first decreases value by 1 but not uses it first

    // for (int i = 5; i >= 1; i--)
    // {
    //     printf("%d \n", i);
    // }

    // We can also use float in counter loop
    // for (float i = 5.0; i >= 1.0; i--)
    // {
    //     printf("%f \n", i);
    // }

    // We can also use char in counter loop
    // for (char i = 'a'; i <= 'z'; i++)
    // {
    //     printf("%c \n", i);
    // }

    // This is an infinite loop, it never stops since there is no condition where to stop
    // for (int i = 1;; i++)
    // {
    //     printf("Hello World \n");
    // }

    // This is while loop , we use it as below
    int c = 1;
    while (c <= 5)
    {
        printf("Hello World \n");
        c++;
    }

    // This is do while loop , we use it as below
    int f = 1;
    do
    {
        printf("Hello World \n");
        f++;
    } while (f < 1);

    // int g = 1;
    // do
    // {
    //     printf("Hello World \n");
    //     g++;
    // } while (g <= 1);

    // Q Print first n natural numbers
    int n;
    printf("Enter n here: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d \n", i);
    }

    // Q Print sum of first e natural numbers and also print those numbers in reverse order
    int e;
    printf("Enter e here : ");
    scanf("%d", &e);

    int sum = 0;
    // We can also use two or more counter loops
    for (int i = 1, j = e; i <= e && j >= 1; i++, j--)
    {
        sum = sum + i; // sum += i;
        printf("%d \n", j);
    }
    printf("Sum is %d \n", sum);

    // We can print them seperatly also
    // for (int i = e; i >= 1; i--)
    // {
    //     printf("%d \n", i);
    // }

    // Q Print the table of l
    // Method 1
    int l;
    printf("Enter l here : ");
    scanf("%d", &l);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", l * i);
    }

    // Method 2
    // int table = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     table = table + l;
    //     printf("%d \n", table);
    // }

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
            // This is break statement, it takes us out from the loop when the given condition is true
        }
        printf("%d \n", i);
    }

    // Q Stop taking input from user when user enter a odd number
    int number;
    do
    {
        printf("Enter number here : ");
        scanf("%d", &number);
        printf("%d \n", number);
        if (number % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("Thank You");

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
            // This is continue statement, it skips the statement for which the given condition is true and then again continues the remaining statements
        }
        printf("%d \n", i);
    }

    // Q Find the factorial of k
    int k;
    printf("Enter k here : ");
    scanf("%d", &k);

    int factorial = 1;
    for (int i = 1; i <= k; i++)
    {
        factorial = factorial * i;
    }
    printf("%d \n", factorial);

    return 0;
}
