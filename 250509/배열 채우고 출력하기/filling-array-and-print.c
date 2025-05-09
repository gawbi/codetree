#include <stdio.h>

int main() {
    // Please write your code here.
    char str1[10];
    char str2;

    for(int i=0; i<=10; i++){
        scanf(" %c",&str2);
        str1[i]=str2;
    }

     for(int i=9; i>=0; i--){
        printf("%c",str1[i]);
    }
    return 0;
}