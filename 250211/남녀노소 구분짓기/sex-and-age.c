#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d\n%d",&a,&b);
    if(a==0){ //남성
        if(b>=19){
            printf("MAN");
        }
        else{
            printf("BOY");
        }
    }
    else{
        if(b>=19){
            printf("WOMAN");
        }
        else{
            printf("GIRL");
        }

    }
    return 0;
}