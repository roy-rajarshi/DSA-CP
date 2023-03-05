#include<stdio.h>
int main(){
    int x1,x2,x3,x4,a,b,c,max;
    scanf("%d%d%d%d",&x1,&x2,&x3,&x4);
    max=x1;
    if(max<x2)
    max=x2;//6
    if(max<x3)
    max=x3;
    if(max<x4)
    max=x4;
   /* a=max-x1;//6-3=3
    if(a==0){
        a=max-x2;
    }
    b=max-x2;//6-6=0
    if(b==0){
        b=max-x3;//6-5=1
    }
    c=max-x3;//6-5=1
    if(c==0){
        c=max-x4;
    }
    printf("%d %d %d ",a,b,c);*/
    x1=a+b;
    x2=a+c;
    x3=b+c;
    x4=a+b+c; 
    c=max-
return 0;

}