#include <stdio.h>
#include <stdbool.h>

int main() {
    // Please write your code here.
    bool star = false;
    int a,b;

    scanf("%d %d",&a,&b);
    for(int i=a; i<=b; i++){
        if(1920%a==0 && 2880%a==0){
            star=true;
        }
    }
    if(star==true){
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}