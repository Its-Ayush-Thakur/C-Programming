#include <stdio.h>
int main()
{
    FILE *fptr;
    // Now lets try to write in a file
    // If the file in fopen does not exists then in the case of write the programme creates an new file of the given name and stores the value in it
    fptr = fopen("new.txt", "w");

    // Here fprintf is used to write in an file as shown below
    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'i');
    fprintf(fptr, "%c", 'i');

    // Now lets try to append an file
    fptr = fopen("append.txt", "a");
    fprintf(fptr, "%c", 'W');
    fprintf(fptr, "%c", 'o');
    fprintf(fptr, "%c", 'r');
    fprintf(fptr, "%c", 'l');
    fprintf(fptr, "%c", 'd');

    fclose(fptr);
    return 0;
}