#include <stdio.h>

int main() {
	int N, R;

	scanf("%d", &N);
	for (int i = 1; i < 10; i++) {
		R = i * N;
		printf("%d * %d = %d\n", N, i, R);
	}
	return 0;
}