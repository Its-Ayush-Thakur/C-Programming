#include <stdio.h>
int main(){
    int age = 19;
    int *ptr = &age;

    // This is pointer to pointer 
    // It stores the address of an pointer 
    int **pptr = &ptr;

    printf("%d \n",pptr);
    printf("%d \n",**pptr);

    return 0;
}