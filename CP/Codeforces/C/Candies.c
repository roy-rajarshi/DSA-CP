#include <stdio.h>
int main()
{
    int a, b, d, i;
    scanf("%d%d", &a, &b);
    if (a % b == 0)
    {
        d = a / b;
        for (i = 1; i <= b; i++)
        {
            printf("%d ", d);
        }
    }
    else
    {
        for (i = 1; i <= a / 2; i++)
        {
            
        }
    }
    return 0;
}

/*
18 7
18/2=9
18/3=6, so we'll take 3
3 3 3 3 2 2 2
*/