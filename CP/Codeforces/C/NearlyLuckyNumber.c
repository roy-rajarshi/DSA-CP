#include<stdio.h>
int main(){
    long long n,r,c=0;
    scanf("%lld",&n);
    while(n>0){
        r=n%10;
        if(r==4 || r==7){
            c++;
        }
        n=n/10;
    }
    if(c==4 || c==7)
    printf("YES");
    else
    printf("NO");
    return 0;
}