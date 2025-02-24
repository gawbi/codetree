#include <stdio.h>

int main() {
    int n, cnt = 0;
    while (1) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            // 짝수의 경우, n % 2는 항상 0이므로 0을 출력합니다.
            printf("%d\n", n / 2);
            cnt++;
        }
        if(cnt==3){
            break;
        }
    }
    return 0;
}
