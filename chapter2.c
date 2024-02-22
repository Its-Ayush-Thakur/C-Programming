#include <stdio.h>

int main()
{
    // int a = 3;
    // int b = c;
    // int c = 1;

    int a = 3;
    int b = a;
    int c = b + 1;

    // We have to define a variable before using it so because we not defined d,e,f so error occurs
    // int d = e = f = 9;

    int d, e, f;
    d = e = f = 9;
    // int d = e = f = 9;

    int i, j;
    int h = i + j;

    // int i + j = h ;
    // We cannot define a variable like above

    // This is modular operator , it displays the remainder of division of two numbers
    printf("This is modulo %d \n", 3 % 2);
    printf("This is modulo %d \n", -3 % 2);
    printf("This is modulo %d \n", 3 % -2);
    printf("This is modulo %d \n", 15 % 3);

    // If we add a int with int, int occurs
    printf("%d \n", 3 + 5);

    // If we add a int with a float then float occurs, so we have to use a %f otherwise output will not come
    printf("%d \n", 3.0 + 5);
    printf("%f \n", 3.0 + 5);

    // If we add a float with a float then float occurs, so we have to use a %f otherwise output will not come
    printf("%d \n", 3.0 + 5.0);
    printf("%f \n", 3.0 + 5.0);

    // The sequence for operators in c language is first / or * or % and then + or - and then =
    // But if all three of first kind comes together than we go from left to right and this is known as associative rule
    printf("%d \n", 5 + 3 / 3 * 4);

    // This is inequality operator
    // It produces 0 if both the  numbers are  equal and 1 if both the numbers are not equal
    printf("%d \n", 5 != 5);

    // This is equality operator
    // It produces 0 if both the  numbers are not equal and 1 if both the numbers are equal
    printf("%d \n", 5 == 5);

    // This is greater than operator
    printf("%d \n", 3 > 4);
    printf("%d \n", 3 > 2);

    // This is greater than equal to operator
    printf("%d \n", 3 >= 3);

    // This is smaller than operator
    printf("%d \n", 3 < 4);
    printf("%d \n", 3 < 2);

    // This is smaller than equal to operator
    printf("%d \n", 3 <= 3);

    // This is and operator this produces 1 when both the conditions are true and 0 when any of the conditions is false
    printf("%d \n", 5 > 4 && 6 > 4);
    printf("%d \n", 3 > 4 && 6 > 4);
    printf("%d \n", 3 > 4 && 2 > 4);
    printf("%d \n", 5 > 4 && 2 > 4);

    // This is or operator this produces 1 when any of the conditions is true and 0 when both the conditions are false
    printf("%d \n", 5 > 4 || 6 > 4);
    printf("%d \n", 3 > 4 || 6 > 4);
    printf("%d \n", 3 > 4 || 2 > 4);
    printf("%d \n", 5 > 4 || 2 > 4);

    // This is not operator, it changes the output from 0 to 1 and 1 to 0
    printf("%d \n", !(8 > 7));

    // You can see below how we can use the below operator

    int x = 5;
    int y = 4;
    // x = x + 10;
    x += 10;
    printf("%d \n", x);

    // x = x - 12;
    x -= 12;
    printf("%d \n", x);

    // x = x * 2;
    x *= 2;
    printf("%d \n", x);

    // x = x / 2;
    x /= 2;
    printf("%d \n", x);

    // x = x % 2;
    x %= 2;
    printf("%d \n", x);
    return 0;
}

// In a binary language 0 means false and any other number means true
// Class notes avalaible in file manager