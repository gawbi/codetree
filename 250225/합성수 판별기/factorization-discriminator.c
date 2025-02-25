#include <stdio.h>
#include <stdbool.h>
int main() {
    // Please write your code here.
    int n;
    bool star=false;

    scanf("%d",&n);

    for(int i=2; i<n; i++){
        if(n%i==0){
            star=true;    
        }
       
    }
    if(star==true){
        printf("C");//합성수
    }
    else{
        printf("N");//합성수 아님
    }

    return 0;
}