#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);

    int cnt=0;
    for(int i=1; i<=100; i++){
        cnt++;
        n=n/i;
        
        if(n<=1){
            break;
        }
    }
    printf("%d",cnt);

    return 0;
}