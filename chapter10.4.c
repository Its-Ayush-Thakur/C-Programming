#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("fputc.txt", "w");

    // This is fputc , it is a shortcut for writing characters in an file
    // Only for characters
    fputc('H', fptr);
    fputc('i', fptr);
    fputc('i', fptr);

    fclose(fptr);

    return 0;
}