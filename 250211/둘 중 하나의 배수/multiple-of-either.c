#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);

    if(a%3==0 || a%5==0){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}