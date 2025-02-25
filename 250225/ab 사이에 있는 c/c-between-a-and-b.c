#include <stdio.h>
#include <stdbool.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    bool star= false;
    for(int i=a; i<=b; i++){
        if(i%c==0){
            star=true;
        }
    }
    if(star==true){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}