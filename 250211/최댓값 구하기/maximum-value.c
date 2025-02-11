#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if(max>b){
        if(max>c){
            printf("%d",max);
        }
        else{
            printf("%d",c);
        }
    }
    else{
        if(b>c){
            printf("%d",b);
        }
        else{
            printf("%d",c);
        }
    }
    return 0;
}