#include <stdio.h>
#include <string.h>
int main()
{
    int c = 0, i, j, flag, len;
    char s[101];
    gets(s);                       //wjmzbmr
    len = strlen(s);               // 7
    for (i = 0; s[i] != '\0'; i++) //1
    {
        flag = 0;
        for (j = 0; j < len; j++) //7
        {
            if (i != j && s[i] == s[j]) // 2!=5 && m==m
            {
                flag = 1;
            }
        }
        if (flag == 0)
            c++; //2
    }
    if ((c % 2) != 0)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");
    return 0;
}