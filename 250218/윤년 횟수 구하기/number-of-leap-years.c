#include <stdio.h>

int main() {
    // Please write your code here.
    int n,y=0;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i%4==0 && (i%100!=0 || i%400==0)){
            y++;
        }

    }
    printf("%d",y);
    return 0;
}