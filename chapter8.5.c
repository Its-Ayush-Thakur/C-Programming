// Some standard library functions
#include <stdio.h>
// We have to include the string.h library to access the standard library functions
#include <string.h>

int main()
{
    // char name[15];
    // fgets(name,15,stdin);

    char name[] = "Ayush Thakur";
    // The strlen(str) is the standard length function which counts the number of characters excluding the null character but remember it counts the newline character of the fgets function
    printf("Length is : %d", strlen(name));

    return 0;
}