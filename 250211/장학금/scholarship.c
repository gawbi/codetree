#include <stdio.h>

int main() {
    // Please write your code here.
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>=90){
    if(m>=95){
        printf("100000");
    }
    else if(m>=90){
        printf("50000");
    }
    else{
        printf("0");
    }
    }
    else{
        printf("0");
    }
    return 0;
}