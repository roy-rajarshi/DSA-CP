#include<stdio.h>
int main(){
    int m,n,a,d,i;
    scanf("%d%d",&m,&n);
    a=m*n;
    if(a==1)
    d=0;
    else
    for(i=1;i<=a;i++){
        if(a%2==0)
        d=a/2;
        else
        a=a-1;
    }
    printf("%d",d);
    return 0;
}