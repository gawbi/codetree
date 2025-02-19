#include <stdio.h>

int main(void) {
    int A;
    scanf("%d", &A);

    for (int i = 1; i <= A; i++) {
        // 조건 1: 짝수이면서 4의 배수가 아닌 수
        if (i % 2 == 0 && i % 4 != 0) {
            continue;
        }
        // 조건 2: 8로 나눈 몫이 짝수인 수
        if ((i / 8) % 2 == 0) {
            continue;
        }
        // 조건 3: 7로 나눈 나머지가 4보다 작은 수
        if (i % 7 < 4) {
            continue;
        }
        
        // 위의 세 조건 중 하나라도 만족하면 건너뛰므로,
        // 모든 조건을 만족하지 않는 경우에만 출력
        printf("%d ", i);
    }

    return 0;
}
