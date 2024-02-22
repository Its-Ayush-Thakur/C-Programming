#include <stdio.h>
int main()
{
    // Here we create an pointer of the file , we can name it anything but for better understanding we name it fptr
    FILE *fptr;

    // This is how we open an file , the first one is the name of file and the second one is the mode what we want to do with it , read ,write or append or something else
    // r means read , w means write and a means append
    // Append means to add something to the existing file
    // Read means to read the file
    // Write means to write something in the file but it writes after clearing the old file
    // If the file in fopen does not exists then NULL is stored in the pointer when we try to read it
    fptr = fopen("text.txt", "r");

    if (fptr == NULL)
    {
        printf("File does not exist \n");
    }
    else
    {
        // Now lets read an file
        int ch;
        int n;
        // Here fscanf is used to read a file as shown below
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c \n", ch);

        // We can also read integers , floats etc. also
        fscanf(fptr, "%d", &n);
        printf("%d \t", n);
        fscanf(fptr, "%d", &n);
        printf("%d \t", n);
        fscanf(fptr, "%d", &n);
        printf("%d \t", n);

        // This is how we close an file
        fclose(fptr);
    }
    return 0;
}