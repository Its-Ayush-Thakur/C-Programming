// Q. Swap(Interchange) two numbers using pointers 

#include <stdio.h>

void swap(int *a , int *b);
int main(){
    int a = 3;
    int b = 4;

    swap(&a , &b);
    printf("a = %d \n",a);
    printf("b = %d \n",b);

    return 0;
}
void swap(int *a , int *b){
    // We have to define a new variable t because if we code as below 
    // *a = *b ;
    // *b = *a ;
    // The output comes a = 4 and b = 4 

    int t = *a ;
    *a = *b ;
    *b = t ;
}