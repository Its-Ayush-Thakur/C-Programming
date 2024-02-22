#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("fgetc.txt","r");

    // This is fgetc it reads an file , it is a shortcut for reading characters 
    // Only for characters
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));

    fclose(fptr);

    return 0;
}