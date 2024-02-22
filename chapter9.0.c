#include <stdio.h>
#include <string.h>

// This is how we declare an structure
// An structure is an collection of values of different types of datatypes
struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    // This is how we iniatialize an structure
    // The name of the variable of structure is s1
    struct student s1;

    // As we know that string cannot be changed so we cannot define name as below , for defining name we have to use the copy function or else use pointer
    // s1.name = "Ayush Thakur";

    strcpy(s1.name, "Ayush Thakur");
    s1.roll = 20;
    s1.cgpa = 8.5;

    printf("Name = %s \n", s1.name);
    printf("Roll no. = %d \n", s1.roll);
    printf("CGPA = %f \n", s1.cgpa);

    // This is also correct method
    // struct student s2, s3;
    struct student s2;
    strcpy(s2.name, "Jatin Yadav");
    s2.roll = 37;
    s2.cgpa = 9;
    printf("Name = %s \n", s2.name);
    printf("Roll no. = %d \n", s2.roll);
    printf("CGPA = %f \n", s2.cgpa);

    // Another method to initialize an structure but don't forget the sequence 
    struct student s3 = {"Aryan Pathak", 16, 7.5};
    printf("Name = %s \n", s3.name);
    printf("Roll no. = %d \n", s3.roll);
    printf("CGPA = %f \n", s3.cgpa);

    return 0;
}