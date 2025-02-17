#include <stdio.h>

int main() {
    // 입력: 두 정수 A, B
    long long A, B;
    scanf("%lld %lld", &A, &B);

    // 정수 부분 계산
    long long integerPart = A / B;
    printf("%lld.", integerPart);

    // 나머지 계산 (소수점 이하)
    long long remainder = A % B;
    for (int i = 0; i < 20; i++) {
        remainder *= 10;            // 나머지에 10을 곱함으로써 다음 자리 계산 준비
        int digit = remainder / B;  // 다음 자릿수
        printf("%d", digit);
        remainder %= B;             // 새로운 나머지 계산
    }
    
    return 0;
}
