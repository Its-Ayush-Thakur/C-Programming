#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

// This is how we declare functions of structures
void studentInfo(struct student s1);

int main()
{
    struct student s1 = {"Ayush Thakur", 20, 8.5};

    // This is how we call functions of structures
    studentInfo(s1);

    return 0;
}
void studentInfo(struct student s1)
{
    printf("Student Information : \n");
    printf("Name = %s \n", s1.name);
    printf("Roll no. = %d \n", s1.roll);
    printf("CGPA = %f \n", s1.cgpa);
}