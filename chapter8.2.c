#include <stdio.h>
int main()
{
    char ayush[4];

    // This is 'gets' , it inputs multi-words in an string but 'gets' is dangerous and outdated so in place of it 'fgets' is used
    gets(ayush);

    // This is 'puts' , it outputs an string
    puts(ayush);

    // This is 'fgets' , it is used in place of 'gets' , its format is
    // fgets(string,n,file);
    // Here it displays n-1 characters of the string because the 'fgets' function also adds an newline character('\n') at the end and stdin is the file whose full form is standard input
    fgets(ayush, 8, stdin);
    puts(ayush);

    return 0;
}