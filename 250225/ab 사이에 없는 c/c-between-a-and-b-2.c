#include <stdio.h>
#include <stdbool.h>

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	bool satisfied = true;

	for (int i = a; i <= b; i++) {
		if (i % c == 0) {
			satisfied = false;
		}
	}
	if (satisfied == true) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;

}

