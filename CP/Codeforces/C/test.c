#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int len, i, d = 0;
    gets(s);
    len = strlen(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        d++;
    }
    printf("%c", s[len - 1]);
    return 0;
}