#include<stdio.h>
int main(){
    int a,r,steps=0;
    scanf("%d",&a);
    if(a<=5) steps=1;
    else
    {
        r=a%5;
        if(r==0)
        steps=a/5;
        else
        steps=a/5+1;
    }
    printf("%d",steps);
    return 0;
}