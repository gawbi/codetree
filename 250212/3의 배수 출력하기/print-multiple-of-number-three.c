#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);

    int i=3;
    while(i<=n){
        if(i%3==0){
            printf("%d ",i);

        }
        i++;
    }
    return 0;
}