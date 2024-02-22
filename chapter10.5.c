#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("EOF.txt", "r");
    // The fgetc function ends with EOF
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}