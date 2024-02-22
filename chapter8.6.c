#include <stdio.h>
#include <string.h>
int main()
{
    char oldstr[] = "Hello World";
    char newstr[] = "H W";
    // char newstr[10];

    // The strcpy(str1,str2) is a standard copy function which copies the value of str2 to str1 as shown below
    strcpy(newstr, oldstr);
    puts(newstr);

    char cat1[] = "Hello ";
    char cat2[] = "World";

    // The strcat(str1,str2) is a standard concatenation function which adds the value of str2 at the end of str1
    // Remember it provides no space in between the two strings
    strcat(cat1, cat2);
    puts(cat1);

    char cmp1[] = "AB";
    char cmp2[] = "AA";
    char cmp3[] = "AA";
    char cmp4[] = "BA";

    // The strcmp(str1,str2) is a standard compare function which compares the value of str1 to str2
    // It basically works on the principle of substraction of the ASCII value of first string and second string

    // If 0 comes than it means that the strings are equal because the difference of same ASCII values is zero
    printf("%d \n", strcmp(cmp2, cmp3));

    // If positive comes than it means that the ASCII value of string 1 is greater than string 2
    printf("%d \n", strcmp(cmp1, cmp2));

    // If negative comes than it means that the ASCII value of string 1 is less than string 2
    printf("%d \n", strcmp(cmp3, cmp1));
    printf("%d \n", strcmp(cmp1, cmp4));

    return 0;
}