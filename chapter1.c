#include <stdio.h>

int main()
{
    // The below are the different types of variables
    // For example in the below one int is the type of variable and integer is the name of the variable and 8 is the value of the variable
    // The variable name can only start with alphabet or underscore and it can not contain any blank space or any comma and no other symbol other than underscore

    // This is integer type
    int integer = 8;

    // This is float type means decimal
    float decimal = 7.99;

    // This is char type

    // We use double quotes and brackets after the name of the variable if the value of the variable consists of more than one letter
    char characters[] = "Ayush Thakur";
    // We use single quotes if the variable value consists of single letter
    char character = '#';

    // This is how we print
    // The \n is used for a new line

    // The %d and %i means that the type of variable which we want to print is integer and the name of the variable is given after the comma
    printf("Integer is %d \n", integer);
    printf("Integer is %i \n", integer);

    // The %f means that the type of variable which we want to print is float and the name of the variable is given after the comma
    printf("Decimal is %f \n", decimal);

    // The %s means that the type of variable which we want to print is string and the name of the variable is given after the comma
    printf("Name is %s \n", characters);

    // The %c means that the type of variable which we want to print is character and the name of the variable is given after the comma
    printf("Character is %c \n", character);

    // This is how we define a variable before giving it a value
    int a;
    printf("Enter a here ");
    // This is scanf
    // The %d shows the type of input we want and & saves the value in the memory at the 'a' location
    scanf("%d", &a);
    printf("%d \n", a);

    int b;
    int c;
    printf("Enter b here ");
    scanf("%d", &b);
    printf("Enter c here ");
    scanf("%d", &c);
    printf("%d", b + c);

    // The above can also be represented by below method
    // int b,c;
    // printf("Enter b here ");
    // scanf("%d",&b);
    // printf("Enter c here ");
    // scanf("%d",&c);
    // int d = b+c;
    // The above d should always be after the scanf
    // printf("%d",d);

    return 0;

    /*
    This is a
    multiline comment
    */
}

// Class notes avalaible in file manager 