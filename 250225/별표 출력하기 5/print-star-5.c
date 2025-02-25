#include <stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
    
    // i는 각 행마다 *을 몇 묶음씩 출력 할 것인지를 의미합니다.
    for(int i = n; i >= 1; i--) {
        // j는 각 행마다 *묶음을 i번 출력하는 역할을 합니다.
        for(int j = 1; j <= i; j++) {
            // k는 *묶음을 출력해주는 역할을 합니다.
            // *묶음은 항상 i개의 *로 이루어져 있습니다.
            for(int k = 1; k <= i; k++)
                printf("*");
            
            // *묶음을 만든 이후에는 꼭 공백을 띄워줘야 합니다.
            printf(" ");
        }
        // 행마다 한 줄씩 띄워줍니다.
        printf("\n");
    }
    
    return 0;
}