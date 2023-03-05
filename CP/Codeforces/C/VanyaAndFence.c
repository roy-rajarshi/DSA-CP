#include<stdio.h>
int main(){
    int n,h,i,a[100000],w=0;
    scanf("%d%d",&n,&h);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>h){
            w+=2;
        }
        else
        w++;
    }
    printf("%d",w);
    return 0;

}