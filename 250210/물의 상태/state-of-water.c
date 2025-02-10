#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);

    if(a<0){
        printf("ice");
    }
    else if(a>=100){
        printf("vapor");
    }
    else{
        printf("water");
    }
    return 0;
}