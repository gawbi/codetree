#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c,d,e;
    scanf("%d",&a);
    scanf("%d %d %d %d",&b, &c, &d, &e);
    if(a>b){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    if(a>c){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    if(a>d){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    if(a>e){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}