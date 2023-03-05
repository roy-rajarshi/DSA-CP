#include<stdio.h>
int main(){
    long n,d;
    int k,w,m,i,s=0;
    scanf("%d%ld%d",&k,&n,&w);
    for(i=1;i<=w;i++){
        m=i*k;
        s=s+m;
    }
    d=s-n;
    if(d>0)
    printf("%ld",d);
    else 
    printf("0");
    return 0;
}