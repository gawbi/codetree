#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
		for (int j = 2*(n - i)-1; j>1; j--) {
			printf(" ");
		}
		for (int j = 0; j < 2*i + 1; j++) {
			printf("* ");
		}
		printf("\n");
	}
    return 0;
}