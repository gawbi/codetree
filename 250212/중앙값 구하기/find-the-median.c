#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b) {
        if(a > c) {
            // a가 가장 큰 경우, 중앙값은 b와 c 중 큰 값이어야 함.
            if(b > c) {
                printf("%d", b);
            }
            else {
                printf("%d", c);
            }
        }
        else { // c가 a보다 크므로, 중앙값은 a
            printf("%d", a);
        }
    }
    else { // a <= b 인 경우
        if(b > c) {
            // b가 가장 큰 경우, 중앙값은 a와 c 중 큰 값이어야 함.
            if(a > c) {
                printf("%d", a);
            }
            else {
                printf("%d", c);
            }
        }
        else { // c가 가장 큰 경우, 중앙값은 b
            printf("%d", b);
        }
    }

    return 0;
}
