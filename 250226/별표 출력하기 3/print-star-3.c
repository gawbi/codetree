#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        // 각 줄마다 2*i 만큼의 공백 출력
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        // 해당 줄에 출력할 별의 개수: 2*(N-i) - 1
        int starCount = 2 * (N - i) - 1;
        for (int j = 0; j < starCount; j++) {
            printf("*");
            if(j < starCount - 1) { // 별 사이에 공백 추가
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
