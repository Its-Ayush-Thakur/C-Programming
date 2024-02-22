#include <stdio.h>

void square(int n);
void _square(int *n);

int main(){
    int number = 4;

    square(number);
    printf("number = %d \n",number);

    _square(&number);
    printf("number = %d \n",number);

    return 0;
}

// Call by value 
// In it we pass value of variable as arguement 
void square(int n){
    n = n * n ;
    printf("number = %d \n",n);
}

// Call by reference
// In it we pass address of variable as arguement
void _square(int *n){
    *n = (*n) * (*n) ;
    printf("number = %d \n",*n);
}