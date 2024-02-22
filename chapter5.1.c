#include <stdio.h>

// This is how we declare functions
// Declaration/Prototype 
void Printhello();
void Printthanks();

int main()
{   
    // This is how we call functions 
    Printhello();
    Printthanks();
    return 0;
}

// This is how we define functions
void Printhello()
{
    printf("Hello \n");
}
void Printthanks()
{
    printf("Thank You \n");
}