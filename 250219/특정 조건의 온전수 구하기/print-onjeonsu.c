#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);

    for(int i=1; i<=a; i++){
        if(i%2==0){
            continue;
        }
        if(i%10==5){
            continue;
        }
        if(i%3==0&&i%9!=0){
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}