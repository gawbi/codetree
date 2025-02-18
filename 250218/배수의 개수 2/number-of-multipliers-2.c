#include <stdio.h>

int main() {
    int a;
    int cnt = 0;

    for (int i = 1; i <= 10; i++) {
        scanf("%d", &a);
        if (a % 2 == 1) {  // 입력받은 a가 홀수이면
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}
