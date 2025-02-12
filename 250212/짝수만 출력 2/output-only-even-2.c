#include <stdio.h>

int main() {
    // Please write your code here.
    int b,a;
    scanf("%d %d",&b,&a);
    
    while(b>=a){
        printf("%d ",b);
        b-=2;
    }
    return 0;
}