#include <stdio.h>

void PrintNamaste();
void PrintBonjour();

int main()
{
    char nationality;
    printf("Enter I if Indian : ");
    scanf("%c", &nationality);

    if (nationality == 'I')
    {
        PrintNamaste();
    }
    else
    {
        PrintBonjour();
    }
    return 0;
}

void PrintNamaste()
{
    printf("Namaste \n");
    // PrintBonjour();  // We can call a another function in a function
}
void PrintBonjour()
{
    printf("Bonjour \n");
}