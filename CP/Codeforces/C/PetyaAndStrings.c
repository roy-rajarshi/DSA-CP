/*#include<stdio.h>
int main(){
    int d,i,j;
    char s1[1000],s2[1000];
    gets(s1);
    gets(s2);
    for(i=0;i!='\0';i++){
        for(j=0;j!='\0';j++){
            if(s1[i]==s2[j] || (s1[i]+32)==s2[j] || (s1[i]-32)==s2[j]){
            printf("0");
            break;
            }
            else if(s1[i]!=s2[j] && (s1[i]+32)!=s2[j] && (s1[i]-32)!=s2[j]){
                d=s1[i]-s2[j];
                if(d<0)
                printf("-1");
                else
                printf("1");
            }
        }
    }
    return 0;
}*/

#include<stdio.h>
int main(){
    int i,j;
    char s1[1000],s2[1000];
    gets(s1);
    gets(s2);
    for(i=0;i!='\0';i++){
        for(j=0;j!='\0';j++){
            if((s1[i]-s2[j])<0){
            printf("-1");
            break;
            }
            else if((s1[i]-s2[j])>0){
            printf("1");
            break;
            }
            else 
            printf("0");{
            break;
            }
        }
    }
    return 0;
}