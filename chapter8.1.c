#include <stdio.h>

void printName(char name[]);

int main()
{
    // This is how we define string and the \0 character is the null character and it shows that the string ends here and the below method can't contain white spaces
    // char name[] = {'A','Y','U','S','H','\0'};
    char college[] = {'U', 'E', 'C', '\0'};

    // This is the shortcut method to define an string , the C language automatically inserts null character at the end to it
    char name[] = "AYUSH THAKUR";

    // This is a method to print an string
    printf("%s \n", name);
    printf("%s \n", college);

    // Q. Print string name with the help of %c using for loop
    printName(name);

    // This is how we can take input of string using scanf but remember to give size to the string and this method can't store multi-words
    char branch[100];
    scanf("%s", branch);
    printf("Your branch is %s \n", branch);

    return 0;
}

void printName(char name[])
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
}