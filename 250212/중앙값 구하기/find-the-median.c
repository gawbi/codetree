#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        if(a>c){
            if(b>c){
                printf("%d",c);
            }
            else{
                printf("%d",b);
            }
        }
        else{ //a보다 c가 더크다
            printf("%d",a);
        }
    }
    else{
        if(b>c){
            printf("%d",c);
        }
        else{
            printf("%d",b);
        }
    }

    return 0;
}