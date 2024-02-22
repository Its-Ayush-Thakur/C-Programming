#include <stdio.h>

int main()
{
    int age;
    printf("Enter age here: ");
    scanf("%d", &age);

    // This is if else operator
    // We ca use it as below
    if (age >= 18)
    {
        printf("Adult \n");
        printf("You can vote and drive \n");
    }
    else if (age >= 13 && age < 18)
    {
        printf("Teenager \n");
        printf("You cannot vote and drive \n");
    }
    else if (age <= 12 && age > 1)
    {
        printf("Child \n");
        printf("You cannot vote and drive \n");
    }
    else
    {
        printf("Age is not valid \n");
    }

    int lecture;
    // 1-Physics , 2-Chemistry , 3-English , 4-Maths , 5-Hindi

    printf("Enter subject code here: ");
    scanf("%d", &lecture);

    // This is switch case
    // In the bracket of switch we enter what we want to check
    switch (lecture)
    {
    case 1:
        printf("This is Physics lecture \n");
        break;
        // Using break is important , if we not use it than all the remaining cases will run

    case 2:
        printf("This is Chemistry lecture \n");
        break;

    case 3:
        printf("This is English lecture \n");
        break;

    case 4:
        printf("This is Maths lecture \n");
        break;

    case 5:
        printf("This is Hindi lecture \n");
        break;

    default:
        printf("Not a valid lecture number \n");
    }
    // default means else here

    // We can use switch case and if else for char type also and many more types

    char signal;
    // G-Green , R-Red , Y-Yellow

    printf("Enter signal symbol here: ");
    scanf(" %c", &signal);
    // Here space is important before %c I exactly dont know why but when I researched on chatgpt I found that-     When you use scanf("%c", &signal); to read a single character, it reads the character you entered, but it doesn't consume the newline character ('\n') that you press after entering the character. This newline character is left in the input buffer and is read in the next iteration of scanf, causing the "Not a valid signal" message to be printed.

    // To fix this, you can modify your scanf statement to skip any leading whitespace characters, including the newline character, by adding a space before the format specifier like this: scanf(" %c", &signal);

    if (signal == 'G')
    // Remember that every alphabet has a numeric value 
    {
        printf("Green \n");
    }
    else if (signal == 'R')
    {
        printf("Red \n");
    }
    else if (signal == 'Y')
    {
        printf("Yellow \n");
    }
    else
    {
        printf("Not a valid signal \n");
    }
    
    char gender;
    printf("Enter gender here: ");
    scanf(" %c", &gender);
    // M-Male , F-Female , T-Transgender

    // This is ternary operator 
    // The below operator means print Male if gender == M or print Female if gender == F or print Transgender if gender == T or else print Invalid gender 

    gender == 'M' ? printf("Male \n") : gender == 'F' ? printf("Female \n") : gender == 'T' ? printf("Transgender \n") : printf("Invalid gender \n");

    return 0;
}
