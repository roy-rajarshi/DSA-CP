#include<stdio.h>
int main(){
    int n,i,h,m,m1,mt,rm;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&h,&m);
        m1=h*60;
        mt=m1+m;
        rm=1440-mt;
        printf("%d\n",rm);
        mt=0;
    }
    return 0;
}