#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int cnt=0;
    for(int i=1; i<=a; i++){
        if(i%2==0 || i%3==0 || i%5==0){
            continue;
        }
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}