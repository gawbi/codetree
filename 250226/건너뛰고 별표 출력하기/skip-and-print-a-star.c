#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){

        for(int j=0; j<i; j++){
            printf("*");
        }
        for(int k=0; k<1; k++){
            printf("\n");
        }
        printf("\n");
    }
    //
    for(int i=1; i<n; i++){

        for(int j=n; j>i; j--){
            printf("*");
        }
        for(int k=0; k<1; k++){
            printf("\n");
        }
        printf("\n");
    }


    return 0;

}