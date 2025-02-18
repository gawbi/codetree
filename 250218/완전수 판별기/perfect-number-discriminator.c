#include <stdio.h>

int main() {
    // Please write your code here.
    int n,w=0;
    scanf("%d",&n);

    for(int i=1; i<n; i++){
        if(n%i==0){
            w+=i;
        }
    }
    if((double)w/n==1){
        printf("P");
    }
    else{
        printf("N");
    }

    return 0;
}