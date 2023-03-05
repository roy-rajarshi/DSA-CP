#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d",&a);
    for(;;){
        a++;
        b=a/1000;
        c=(a/100)%10;
        d=(a/10)%10;
        e=a%10;
        if(b!=c && b!=d && b!=e && c!=d && c!=e && d!=e)
        break;
    }
    printf("%d",a);
    return 0;
}