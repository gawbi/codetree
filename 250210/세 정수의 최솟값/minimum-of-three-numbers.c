#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c,min;
    scanf("%d %d %d",&a,&b,&c);

    if(a<b){
        min=a;
        if(a<c){
            min=a;
        }
        else{
            min=c;
        }
        printf("%d",min);
    }
    else{
        min=b;
        if(b<c){
            min=b;
        }
        else{
            min=c;
        }
        printf("%d",min);
    }
    return 0;
}