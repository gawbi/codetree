#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n >= 3 && n <= 5){
        printf("Spring");
    }
    else if(n >= 6 && n <= 8){
        printf("Summer");
    }
    else if(n >= 9 && n <= 11){
        printf("Fall");
    }
    else if(n == 12 || n == 1 || n == 2){
        printf("Winter");
    }
    return 0;
}
