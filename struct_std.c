#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    strcpy(s1.name, "Ayush Thakur");
    s1.roll = 20;
    s1.cgpa = 8.1;

    printf("Name = %s \n", s1.name);
    printf("Roll no. = %d \n", s1.roll);
    printf("CGPA = %f \n", s1.cgpa);
    return 0;
}