#include <stdio.h>

int main() {
	int n, r;
	r = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		r += i;

	}
	printf("%d", r);
	return 0;
}