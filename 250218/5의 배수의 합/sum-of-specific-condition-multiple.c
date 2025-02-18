#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    
    // a가 b보다 큰 경우: 내림차순으로 반복
    if (a > b) {
        for (int i = a; i >= b; i--) {
            if (i % 5 == 0) {
                sum += i;
            }
        }
    } 
    // a가 b보다 작거나 같은 경우: 오름차순으로 반복
    else {
        for (int i = a; i <= b; i++) {
            if (i % 5 == 0) {
                sum += i;
            }
        }
    }
    
    printf("%d", sum);
    return 0;
}
