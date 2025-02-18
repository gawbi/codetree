#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    
    for(int i=1; n<=100; i++){
        
        if(n>=90){
            printf("A ");
        }
        else if(n>=80){
            printf("B ");
        }
        else if(n>=70){
            printf("C ");
        }
        else if(n>=60){
            printf("D ");
        }
        else{
            printf("F ");
        }
        
        n=n+1;

    }
    return 0;
}