#include <stdio.h>
int main()
{
    // This is how we can define an array 
    int marks[] = {97, 95, 99};
    // or  // int marks[3] = {97,95,99};

    int price[2];
    printf("Price 1 : ");
    scanf("%d", &price[0]);
    printf("Price 2 : ");
    scanf("%d", &price[1]);

    printf("Final Price 1 : %f \n", price[0] - price[0] * 0.1); // 10% discount
    printf("Final Price 2 : %f \n", price[1] - price[1] * 0.1); // 10% discount

    return 0;
}