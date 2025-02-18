#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    int cn3=0,cn5=0;
    for(int i=1; i<=10; i++){
        scanf("%d",&a);

        if(a%3==0){
            cn3++;
        }
        if(a%5==0){
            cn5++;
        }

    }
    printf("%d %d",cn3,cn5);

    return 0;
}