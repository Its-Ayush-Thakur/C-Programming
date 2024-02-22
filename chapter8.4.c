#include <stdio.h>
// Q. Make an programme to find the length of users name

int countlength(char name[]);
int main()
{
    char name[] = "Ayush Thakur";
    // But in place of the above input if we use fgets then we have to change the return count to return count - 1 because as we know that the fgets functions also adds an newline character('\n') before the null character so the for loop counts the newline character also

    printf("Length of name is : %d ", countlength(name));
    return 0;
}
int countlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}