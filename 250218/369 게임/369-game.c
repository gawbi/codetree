#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int printZero = 0;  // 0을 출력할 조건을 만족하면 1로 설정
        
        // 1. i가 3의 배수인 경우
        if(i % 3 == 0) {
            printZero = 1;
        }
        
        // 2. i의 각 자릿수에 3, 6, 9가 포함되어 있는지 확인
        int temp = i;
        while(temp > 0) {
            int digit = temp % 10;
            if(digit == 3 || digit == 6 || digit == 9) {
                printZero = 1;
                break;  // 조건 만족 시 더 이상 확인할 필요 없음
            }
            temp /= 10;
        }
        
        // 조건에 따라 출력: 조건 만족 시 0, 아니면 i 출력
        if(printZero) {
            printf("0 ");
        } else {
            printf("%d ", i);
        }
    }
    
    return 0;
}
