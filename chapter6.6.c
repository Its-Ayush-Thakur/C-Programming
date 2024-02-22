#include <stdio.h>
// Pointer Arithmetic
int main(){
    int age = 19 ;
    int *ptr = &age ;

    printf("ptr : %d \n",ptr);

    // We can add a pointer 
    // The below code adds 1 to ptr which means that the address of ptr will increase by 1 integer and an integer has an size of 4 bytes so it will increase by 4 bytes 
    ptr++;
    printf("ptr : %d \n",ptr);

    // Similiarly you can substract also 
    ptr--;
    printf("ptr : %d \n",ptr);

    // Same for float but use float here and %d for pointer address 
    float a = 3.4;
    float *flt = &a;
    printf("ptr : %d \n",flt);
    flt++;
    printf("ptr : %d \n",flt);

    // Same for char but remember the size of char is 1 bytes 
    char b = 'A';
    char *chr = &b ;
    printf("ptr : %d \n",chr);
    chr++;
    printf("ptr : %d \n",chr);


    // We can also compare and find difference between two pointers but remember their type should be same
    int class = 11;
    int grade = 3;
    int marks = 98;

    int *cls = &class;
    int *grd = &grade;
    int *mrks = &marks;
    
    // Here the difference is 2 which means 8 bytes 
    printf("Difference = %d \n",cls - mrks);

    grd = &class;
    // Here 1 shows true 
    printf("Comparison = %d \n",cls == grd);

    return 0;
}