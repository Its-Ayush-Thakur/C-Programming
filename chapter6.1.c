#include <stdio.h>

int main()
{
    // First we define a variable age 
    int age = 19;

    // Here &age means address of age and * means it is a pointer 
    int *ptr = &age;

    // If we use * as below than it means that _age stores the value which is at the address which is stored in ptr variable 
    int _age = *ptr;

    // This will display 19 
    printf("%d \n", *ptr);

    // This will display address of age 
    printf("%d \n", ptr);

    // This will display 19
    printf("%d \n", _age);

    // for pointer we should use %p which is its actual hexadecimal adress but we generally use %d or %u which is also address but not actual it is modified one  
    printf("%p \n", &age);
    printf("%u \n", &age);

    // This is address of pointer 
    printf("%p \n", &ptr);
    
    printf("%d \n", *(&age));

    return 0;
}