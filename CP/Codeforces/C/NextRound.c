#include <stdio.h>
int main()
{
    int n, k, s[1000], c = 0, i;
    scanf("%d%d", &n, &k);  //17, 14
    for (i = 0; i < n; i++) //0
    {
        scanf("%d", &s[i]); // 16, 15...
    }
    for (i = 0; i < n; i++) //0
    {
        if (s[i] != 0)
        {
            if (s[i] >= s[k - 1])
                c++;
        }
    }
    printf("%d", c);
    return 0;
}


