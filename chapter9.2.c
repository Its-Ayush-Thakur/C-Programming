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
    // This is how we define and use an array of an structure
    struct student CSE[75];
    strcpy(CSE[0].name, "Ayush Thakur");
    CSE[0].roll = 20;
    CSE[0].cgpa = 8.5;
    printf("%s \n", CSE[0].name);
    printf("%d \n", CSE[0].roll);
    printf("%f \n", CSE[0].cgpa);

    strcpy(CSE[1].name, "Jatin Yadav");
    CSE[1].roll = 37;
    CSE[1].cgpa = 9;
    printf("%s \n", CSE[1].name);
    printf("%d \n", CSE[1].roll);
    printf("%f \n", CSE[1].cgpa);

    return 0;
}