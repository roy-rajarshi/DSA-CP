#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i, n, len;
    scanf("%d", &n);
    while (n != 0)
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            scanf("%c", s[i]);
        }
        len = strlen(s);
        if (len < 10)
        {
            for (i = 0; i < len; i++)
            {
                printf("%c", s[i]);
            }
        }
        if (len >= 10)
        {
            for (i = 0; i < len; i++)
            {
                printf("%c%d%c", s[0], len - 2, s[len - 1]);
            }
        }
        n--;
    }
    return 0;
}
