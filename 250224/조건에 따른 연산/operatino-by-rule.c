#include <stdio.h>

int main() {
    // Please write your code here.
    int n,cnt=0;
    scanf("%d",&n);
    while(1){
        cnt++;
        if(n%2==0){
            n=n*3+1;    
        }
        else{
            n=n*2+2;
        }
        if(n>=1000){
            printf("%d",cnt);
            break;
        }
    }
    return 0;
}