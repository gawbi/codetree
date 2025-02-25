#include <stdio.h>
#include <stdbool.h>

int main() {
    // Please write your code here.
    int n;
    bool star=true;
    scanf("%d",&n);

    for(int i=2; i<n; i++){
        if(n%i==0){
            star=false;
        }
    }

    if(star==true){
        printf("P");
    }
    else{
        printf("C");
    }
    return 0;
}