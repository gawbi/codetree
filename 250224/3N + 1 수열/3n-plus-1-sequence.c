#include <stdio.h>

int main() {
    // Please write your code here.
    int n,cnt=0;
    scanf("%d",&n);

    while(1){
        if(n%2==0){
            n=n/2;
            cnt++;
        }
        else if(n==1){
            printf("%d",cnt);
            break;
        }
        else{
            n=n*3+1;
            cnt++;
        }
    }
    
    return 0;
}