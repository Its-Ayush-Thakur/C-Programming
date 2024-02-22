#include <stdio.h>
#include <string.h>

// Typedef keyword is used to create alias for datatypes
// Here below we created an alias(cse) for struct ComputerScienceStudent datatype
typedef struct ComputerScienceStudent
{
    char name[100];
    int roll;
    float cgpa;
} cse;

int main()
{
    cse s1;
    s1.roll = 20;
    s1.cgpa = 8.5;

    strcpy(s1.name, "Ayush Thakur");
    printf("Name = %s \n", s1.name);
    printf("Roll no. = %d \n", s1.roll);
    printf("CGPA = %f \n", s1.cgpa);

    return 0;
}