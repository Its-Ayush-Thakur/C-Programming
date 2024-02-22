#include <stdio.h>
void slicedstr(char slice[], int m, int n);
int main()
{
    char slice[100];
    fgets(slice, 100, stdin);
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    slicedstr(slice, m, n);
    return 0;
}
void slicedstr(char slice[], int m, int n)
{
    int j = 0;
    char newstr[100];
    for (int i = m; i <= n; i++, j++)
    {
        newstr[j] = slice[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}