#include<stdio.h>
#include<math.h>
int main(){
    long long n,r,p,c=0,last,last2;
    scanf("%lld",&n);
    p=pow(5,n);
    while(p>0){
        c++;
        r=p%10;
        if(c==1)
        last=r;
        if(c==2){
            last2=r;
            break;
        }
        p=p/10;
    }
    printf("%lld%lld",last2,last);
    return 0;
}