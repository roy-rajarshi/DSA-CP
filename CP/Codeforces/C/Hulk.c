#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    if (n == 1)
    printf("I hate it");
    else
    printf("I hate that");
    for (i = 2; i <= n; i++){
        if (i % 2 == 0){
            if (i+1>n){
                printf(" I love it");
            }
            else{
                printf(" I love that");
            }
        }
        else{
            if (i+1>n){
                printf(" I hate it");
            }
            else{
                printf(" I hate that");
            }
        }
    }
    return 0;
}