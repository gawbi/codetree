#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // 내림차순: N개부터 1개까지 별 출력
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 오름차순: 2개부터 N개까지 별 출력
    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
