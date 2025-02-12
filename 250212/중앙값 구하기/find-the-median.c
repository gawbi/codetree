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
    else{ //a보다 b가 더 크다
        if(b>c){
            if(a>c){
                 printf("%d",a);
            }
            else{
                printf("%d",c);
            }
        }
        else{ //a보다 b가 더 크고, c가 b보다 크다
            
            printf("%d",b);
        }
    }

    return 0;
}