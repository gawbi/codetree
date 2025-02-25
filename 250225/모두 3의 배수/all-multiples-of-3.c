#include <stdio.h>
#include <stdbool.h>
int main() {
    // Please write your code here.
    int n;
    bool s = true;
    
    for(int i=0; i<=4; i++){
        scanf("%d\n",&n);
        
        if(n%3==0){
            continue;
        }
        else{
            s = false;
        }

    }

    if(s==true){
        printf("1");
    }
    else{
        printf("0");
    }

}