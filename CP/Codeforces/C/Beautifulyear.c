#include<stdio.h>
int main(){
    int a,k,c=0,r1,r2,i;
    scanf("%d",&a);
    for(i=a+1;i<=9000;i++){
        k=i;//1988
        r1=i%10;//8
        i=i/10;//198
        while(i>0){//0
            r2=i%10;//1
            if(r2!=r1)//1!=8
            c++;//2
            i=i/10;//0
        }
        if(c==3){//2!=3
            printf("%d",k);
            break;
        }
        c=0;
    }
    return 0;
}