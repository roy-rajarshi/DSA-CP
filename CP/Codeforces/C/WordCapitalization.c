#include<stdio.h>
int main(){
    char s[1000];
    int i;
    gets(s);
    for(i=97;i<=122;i++){
        if(s[0]==i)
        printf("%d",s[i-32]);
        break;
    }
    for(i=0;s[i]!='\0';i++){
        printf("%d",s[i]);
    }
    return 0;
}