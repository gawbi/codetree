#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    int sum=1;
    for(int i=1; i<=100; i++){
        if(sum>=n){
            
        
            printf("%d",i);
            break;
        }
        else{
            sum+=i;
        }
    }

    return 0;
}