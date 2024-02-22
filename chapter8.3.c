#include <stdio.h>
// Store string using pointers
int main()
{
    // This is how we can store an string using pointers and the main benefit of using pointers is that the value of strings can be changed if we use pointers
    char *canChange = "Ayush";
    puts(canChange);
    canChange = "Ayush Thakur";
    // The value of Ayush is changed by Ayush Thakur
    puts(canChange);

    // We cant change the values of string if we assign string in normal way
    char cannotChange[] = "Ayush";
    puts(cannotChange);
    // cannotChange = "Ayush Thakur";
    // And if we try to change values than error occurs
    puts(cannotChange);

    return 0;
}