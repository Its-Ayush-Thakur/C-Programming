#include <stdio.h>

struct student
{
    int roll;
};

int main()
{
    struct student s1;
    s1.roll = 20;
    printf("Roll no. = %d \n", s1.roll);

    // Using structure with the help of pointer
    struct student *ptr = &s1;
    (*ptr).roll = 20;
    printf("Roll no. = %d \n", (*ptr).roll);

    // This is arrow operator for shortcut of above pointer
    printf("Roll no. = %d \n", ptr->roll);

    return 0;
}